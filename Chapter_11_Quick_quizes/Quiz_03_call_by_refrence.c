
/* Given two numbers a and b, add them and then subtract them
   and then assign those new value of addition into a and the value
   came after subtraction into b using call by refrence.

   Assume,  a=4 and b=3  */

#include <stdio.h>
void add_sub(int *x, int *y)
{
    int add = *x + *y;
    int sub = *x - *y;
    *x = add;
    *y = sub;
}
int main(int argc, char const *argv[])
{
    int a = 4, b = 3;
    printf("The value of a and b now is: %d and %d\n", a, b);
    add_sub(&a, &b);
    printf("The value of a and b after addition and subtraction is: %d and %d\n", a, b);

    return 0;
}
