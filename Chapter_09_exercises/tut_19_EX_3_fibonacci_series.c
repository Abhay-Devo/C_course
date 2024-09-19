// This exercise is to print a fibonacci series using recursive and iterative method
#include <stdio.h>
int fib_iterative(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }

    return a;
}
int fib_recursive(int n) // Slow compared to iterative approach
{
    if (n==1 || n==2)
    {
        return n-1;
    }
    else
    {
        return fib_recursive(n-1) + fib_recursive(n-2);
    }
    
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the index to find fibonacci series of:\n");
    scanf("%d",&num);
    printf("The fibonacci series of the given index %d using iterative method is %d\n", num, fib_iterative(num));
    printf("The fibonacci series of the given index %d using recursive method is %d\n", num, fib_recursive(num));
    return 0;
}
