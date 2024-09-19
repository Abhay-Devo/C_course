// Exercise to print the multiplication table of the number given by user.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    size_t b= 11;
    printf("Enter the number you want the multiplication table of: \n");
    scanf("%d", & a);
    
    printf("The multiplication table of %d :\n",a);

    for (size_t i = 1; i < b; i++)
    {
        printf("%d x %d = %d\n", a, i, a * i);
    }
    
    
    

    return 0;
}
