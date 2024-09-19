// #include <stdio.h>

// int main() {
//     int a = 10, b = 20;
//     int result;

//     // Inline assembly to add two numbers
//     asm("addl %%ebx, %%eax;"  // Assembly instruction
//         : "=a" (result)        // Output operand list
//         : "a" (a), "b" (b)     // Input operand list
//     );

//     printf("Result of addition: %d\n", result);

//     return 0;
// }


// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int result;
//     asm("mov $4, %%eax;"
//         "mov $5, %%ebx;"
//         "add %%eax, %%ebx;"
//         "mov %%ebx, %0;"
//         : "=r" (result)
//     );
//     printf("Result: %d\n", result);
//     return 0;
// }




// #include <stdio.h>

// int main(int argc, char const *argv[]) {
//     int x = 5;
//     int y = 4;
//     int a = 8;
//     int b = 2;
//     int result1, result2, result3;

//     asm(
//         "mov %1, %%ebx;"         // Move x into ebx
//         "xor %2, %%ebx;"         // XOR y with ebx
//         "mov %3, %%ecx;"         // Move a into ecx
//         "and %4, %%ecx;"         // AND b with ecx
//         "or %%ecx, %%ebx;"       // OR ecx with ebx
//         "mov %%ebx, %0;"         // Move result1 from ebx to output

//         "add %1, %%edx;"         // Add x to edx (result2)
//         "add %2, %%edx;"         // Add y to edx (result2)
//         "mov %%edx, %5;"         // Move result2 from edx to output

//         "mul %3;"                // Multiply eax (result3) by a
//         "mov %%eax, %6;"         // Move result3 from eax to output
//         : "=r" (result1), "=r" (result2), "=r" (result3)  // Outputs
//         : "r" (x), "r" (y), "r" (a), "r" (b)              // Inputs
//         : "%ebx", "%ecx", "%edx", "%eax"                  // Clobbered registers
//     );

//     printf("Result1: %d\n", result1);
//     printf("Result2: %d\n", result2);
//     printf("Result3: %d\n", result3);

//     return 0;
// }






// #include <stdio.h>

// int main(int argc, char const *argv[]) {
//     int x = 5;
//     int y = 4;
//     int result1, result2;

//     asm(
//         "movl %2, %%eax;"      // Move x into eax
//         "addl %3, %%eax;"      // Add y to eax (result1)
//         "movl %%eax, %0;"      // Store eax into result1

//         "imull %2, %3;"        // Multiply x and y, result in edx:eax
//         "movl %%eax, %1;"      // Store the lower 32 bits of the product into result2
//         : "=r" (result1), "=r" (result2)  // Outputs
//         : "r" (x), "r" (y)               // Inputs
//         : "%eax", "%edx"                 // Clobbered registers
//     );

//     printf("Result1 (x + y): %d\n", result1);
//     printf("Result2 (x * y): %d\n", result2);

//     return 0;
// }



