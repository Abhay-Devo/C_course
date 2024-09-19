/* Writing an program in inline assembly to do whole alu operartions only on stack...
   expression = (a + b * c) / (a + d * c - e)... */

#include <stdio.h>

int main() {
    // Local variables
    int a = 10, b = 20, c = 30, d = 40, e = 50;
    int result;

    // Inline assembly to compute the expression (a + b * c) / (a + d * c - e) using stack operations
    __asm__ __volatile__ (
        // Push all variables onto the stack
        "push %[e]"         // Push e
        "push %[d]"         // Push d
        "push %[c]"         // Push c
        "push %[b]"         // Push b
        "push %[a]"         // Push a

        // Perform (b * c)
        "pop %%ebx"         // Load c into EBX
        "pop %%ecx"         // Load b into ECX
        "imul %%ebx"        // Multiply b by c
        "push %%eax"        // Push result of b * c

        // Perform (a + b * c)
        "pop %%ebx"         // Load result of b * c into EBX
        "pop %%ecx"         // Load a into ECX
        "add %%ecx, %%ebx" // Add a to result of b * c
        "push %%ebx"        // Push result of a + b * c

        // Perform (d * c)
        "pop %%ebx"         // Load c into EBX
        "pop %%ecx"         // Load d into ECX
        "imul %%ecx"        // Multiply d by c
        "push %%ebx"        // Push result of d * c

        // Perform (a + d * c)
        "pop %%ebx"         // Load result of d * c into EBX
        "pop %%ecx"         // Load result of a + b * c into ECX
        "add %%ebx, %%ecx" // Add result of d * c to result of a + b * c
        "push %%ecx"        // Push result of a + d * c

        // Perform (a + d * c - e)
        "pop %%ebx"         // Load e into EBX
        "pop %%ecx"         // Load result of a + d * c into ECX
        "sub %%ebx, %%ecx" // Subtract e from result of a + d * c
        "push %%ecx"        // Push result of a + d * c - e

        // Perform final division (a + b * c) / (a + d * c - e)
        "pop %%ebx"         // Load result of a + d * c - e into EBX
        "pop %%ecx"         // Load result of a + b * c into ECX
        "cdq"               // Extend EAX into EDX:EAX for division
        "idiv %%ebx"        // Divide EAX by EBX, result in EAX
        "push %%eax"        // Push final result

        // Store result
        "pop %[result]"     // Pop the result into the result variable

        : [result] "=r" (result)  // Output operand
        : [a] "r" (a), [b] "r" (b), [c] "r" (c), [d] "r" (d), [e] "r" (e) // Input operands
        : "eax", "ebx", "ecx", "memory" // Clobbered registers
    );

    // Print the result
    printf("Result of the expression is %d\n", result);

    return 0;
}
