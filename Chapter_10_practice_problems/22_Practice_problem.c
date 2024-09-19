/* WRITE A PROGRAM TO MAKE YOUR OWN VERSION OF STRLEN OF <STRING.H>...*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str1[] = "hello";
    char *str2 = "This is custom strlen function";

    int i = 0;
    int check1 = 0;
    while (str1[i] != '\0')    
    {
        check1++;
        i++;
    }
    printf("The length of the given string in (str1) using own strlen function is: %d\n", check1);

    int check2 = 0;
    while (*str2 != '\0')
    {
        check2++;
        str2++;
    }
    printf("The length of the given string in (str2) using own strlen function is: %d\n", check2);

    return 0;
}