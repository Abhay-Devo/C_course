/* Write a Inline assembly function to execute this statement...
   1. z = x/y
   2. r = x%y  */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 20, y = 5;
    int z, r;

    asm(
        "movl %2, %%eax;"
        "cltd;"
        "divl %3;"
        "mov %%eax, %0;"
        "mov %%edx, %1"
        : "=r"(z), "=r"(r)
        : "r"(x), "r"(y)
        : "%eax", "%edx");
    printf("The result of division is: %d, and the remainder is: %d", z, r);

    return 0;
}