/* Write a Inline assembly program to show use of pointer, string and
   loops together...*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // this is not string initiallization here *pa pointing to the address of the string 
    char *pa = "This is a Constatant string";     
    int i = 0;

    __asm__(
        "cld;"
        "mov %1, %%ebx;"
        "xor %%ecx, %%ecx;"
        "compare:"
        "cmpb $0, (%%ebx);"       // using () in ebx register helps to derefrence the value 
                                  // in the addr stored in ebx register
        "jz done;"
        "inc %%ebx;"
        "inc %%ecx;"
        "jmp compare;"
        "done:"
        "mov %%ecx, %0;"
        : "=r"(i)
        : "r"(pa)
        : "%ebx", "%ecx" 

    );
    printf("%d", i);

    return 0;
}