// Trying to build full scale calc and trying to make it more efficient
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    int z;
    printf("Enter the first no.");
    scanf("%d", &a);

    printf("Enter the second no.");
    scanf("%d", &b);

    printf("Enter the operation you want to perform (+,-,*,/) \n");
    printf("For + enter 1,\nFor - enter 2,\nFor * enter 3,\nFor / enter 4\n");
    scanf("%d", &z);

    if (z == 1)
    {
        printf("\nThe sum of these two no. are: %d\n", a + b);
    }
    else if (z == 2)
    {
        printf("\nThe subtraction of these two no. are: %d\n", a - b);
    }
    else if (z == 3)
    {
        printf("\nThe multiplication of these two no. are: %d\n", a * b);
    }
    else if (z == 4)
    {
        printf("\nThe division of these two no. are: %d\n", a / b);
    }
    else
    {
        printf("Please enter the right operand to perform any action.!!!\n");
    }

    return 0;
}
