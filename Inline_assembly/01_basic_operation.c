/* Making basic arthematic operation performing Inline assembly program like
   Addition, Subtraction, and multiplication...*/


// EAX <-- x*y+a-b     

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 5;
    int y = 4;
    int a = 8;
    int b = 2;
    int result;

    asm(
        "movl %1, %%eax;"
        "mull %2;"
        "addl %3, %%eax;"
        "subl %4, %%eax;"
        "movl %%eax, %0;"
        : "=r" (result)         // '=' sign tells that this is output, 'r' tells that it can be any gen-purpose reg.

        : "r" (x), "r" (y), "r" (a), "r" (b)  // no '=' sign tells this is giving input from any gen-purpose reg.

        : "%eax"                      // this tell the compiler that register /eax is changed. 

                        /* we can use register specific constraints like a= eax, b= ebx, c= ecx, d= edx
                        but when the value is already inside the register. */
    );
    printf("\n %d", result);
    
    return 0;
}
 


