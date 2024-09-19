/*Quiz = Allow users to enter two strings and then add both of them with an middle
        string saying "is a friend of" */


#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char inp1[50];
    char inp2[50];
    char add1[] = " is a friend of ";
    char cpy_1[50];

    printf("Enter the first string: ");
    gets(inp1);
    printf("\nEnter the second string: ");
    gets(inp2);

    strcpy(cpy_1, strcat(inp1, add1));
    puts(strcat(cpy_1, inp2));

    return 0;
}
