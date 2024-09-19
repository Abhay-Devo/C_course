/* Write a program to take string input using %s, and %c format specifier and then compare it...
   But %c is not working becoz in tut fflush() func is working but not here so using getchar() func...*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[20];
    char str2[20];
    char c;
    int i = 0;

    printf("Enter the string to input in str1:\n");
    scanf("%s", str1);

    printf("Enter the string to input in str2:\n");
    getchar();

    while ((c = getchar()) != '\n' && i < sizeof(str2) - 1)
    {
        str2[i] = c;
        i++;
    }
    str2[i] = '\0';

    /* while (c!='\n')
    {
        fflush(stdin);      // don't know why not working chatgpt saying fflush is not valid for taking input.
        scanf("%c", &c);
        str2[i] = c;
        i++;
    } */

    printf("The string in str1 is:%s\n", str1);
    printf("The string in str2 is:%s\n", str2);
    printf("strcmp for these string returns: %d", strcmp(str1, str2));

    return 0;
}