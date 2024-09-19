/* Write a program using Inline assembly in C to make a loop that can multiply 2 no.
   using repetative addition...*/

// Z <-- x*y [(x+x+x+x+x...)*y]

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 4;
    int y = 5;
    int result;

    asm(
        "xor %%ebx, %%ebx;"
        "mov %1, %%ecx;"
        "loop:"
        "add %2, %%ebx;"
        "dec %%ecx;"
        "jnz loop;"
        "mov %%ebx, %0;"
        : "=r"(result)
        : "r"(x), "r"(y)
        : "%ecx", "%ebx"

    );
    printf("%d", result);
    
    return 0;
}