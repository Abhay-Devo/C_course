/* Write a program to find out that the year enter by the user is 
   a leap year or not. Take year as a input from the user... */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int year;
    printf("Enter the year which you want to find out whether it is leap year or not:");
    scanf("%d", &year);

    if ((year % 4 == 0) && year / 100 && year / 400)
    {
        printf("Yes, This is a %d leap year!!!", year);
    }
    else
    {
        printf("No, This is not a %d leap year!!!", year);
    }

    return 0;
}