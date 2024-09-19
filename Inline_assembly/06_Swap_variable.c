/* In this program we will see how to swap two variables in assembly with 
   optimized code... */


#include <stdio.h>

int main(int argc, char const *argv[])
{
    // we know how to swap variables in c using temp variable.
    // but here we will see how we will do it in stack without temp variable.
    int x = 2, y = 3;

    asm(
        "push %1;"
        "push %2;"
        "pop %0;"
        "pop %1;"
        : "=r" (x), "=r" (y)
        : "r" (x), "r" (y)
        : "memory"
    );
    printf("x = %d, y = %d", x, y);
    
    return 0;
}