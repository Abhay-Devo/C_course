/* Making a program that can demonstrate the bit wise operation in c code using
   Inline Assembly... */


// EBX <-- (x^y) | (a&b)   


#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 5;
    int y = 4;
    int a = 8;
    int b = 2;
    int result;

    asm(
        "mov %1, %%ebx;"
        "xor %2, %%ebx;"
        "mov %3, %%ecx;"
        "and %4, %%ecx;"
        "or %%ecx, %%ebx;"
        "mov %%ebx, %0;"
        : "=r" (result)
        : "r" (x), "r" (y), "r" (a), "r" (b)
        : "%ebx", "%ecx"              // Clobbered registers = the registered has been changed.
    );
    printf("%d", result);
    
    return 0;
}