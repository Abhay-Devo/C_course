/* There is two type of call function.
   1. call by value      We use it everywhere, whenever you are calling a fuction by its var name. 
   2. call by reference...*/
   
   
// Calling funciton by its refrence.
#include <stdio.h>

void swap(int* x, int* y);

int main(int argc, char const *argv[])
{
    int a = 5, b = 8;
    printf("The value of a and b is: %d and %d\n",a,b);
    swap(&a, &b);
    printf("The value of a and b now is: %d and %d",a, b);
    return 0;
}

void swap(int* x, int* y)
{
    int s = *x;
    *x = *y;
    *y = s;
}



// Calling function by its value is seen many times in other tuts like  Chapter_03/tut_15
