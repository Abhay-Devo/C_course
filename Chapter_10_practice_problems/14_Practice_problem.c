// fib(n) = fib(n - 1) + fib(n + 1)
// fib
#include <stdio.h>

int fib(int num);

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    switch (num)
    {
    case 0:
        printf("The Fibonacci sequence is: 0");
        break;
    case 1:
        printf("The Fibonacci sequence is: 1");
        break;
    }

    if (num >= 2)
    {
        int fibonacci = fib(num);
        printf("The Fibonacci sequence is: %d", fibonacci);
    }

    return 0;
}

int fib(int num)
{
    if (num == 0)
        return 0;

    else if (num == 1)
        return 1;
        
    else
        return fib(num - 1) + fib(num - 2);
}