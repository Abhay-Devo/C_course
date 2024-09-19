#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a;    
    printf("Enter the character to know its ASCII value: ");
    scanf("%c", &a);
    printf("The ASCII value of given character '%c' is: %d", a, a);
    return 0;
}
