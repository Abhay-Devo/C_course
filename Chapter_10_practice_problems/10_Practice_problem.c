/* Write a program to find the greatest number given by the user
   as an input, Take 4 numbers as an input from the user... */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3, num4, greatest;
    printf("Enter the first number:");
    scanf("%d", &num1);

    printf("Enter the second number:");
    scanf("%d", &num2);

    printf("Enter the third number:");
    scanf("%d", &num3);

    printf("Enter the fourth number:");
    scanf("%d", &num4);

    greatest = num1;

    if (num2 > greatest)
    {
        greatest = num2;
    }
    if (num3 > greatest)
    {
        greatest = num3;
    }
    if (num4 > greatest)
    {
        greatest = num4;
    }
    else
    {
        printf("All numbers are equal %d.\n& ", greatest);
    }

    printf("The greates number is %d.", greatest);

    return 0;
}