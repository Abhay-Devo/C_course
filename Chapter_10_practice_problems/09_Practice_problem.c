/* Write a program to find out the character given by the user is 
   uppecase or lowercase, Take character as input form user... */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char input;
    printf("Enter a char to check if it's uppercase or lowercase and get its ASCII value:");
    scanf("%c", &input);
    if (input >= 'a' && input <= 'z')  // I can use ASCII value instead of characters
    {
        printf("\n'%c' is a lowercase letter and its ASCII value is %d\n", input, input);
    }

    else if (input >= 'A' && input <= 'Z')
    {
        printf("\n'%c' is a Uppercase letter and its ASCII value is %d\n", input, input);
    }

    else
    {
        printf("\nPlease enter a valid input!!!");
    }

    return 0;
}