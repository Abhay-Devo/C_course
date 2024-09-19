/* Star printing program using iterative and recursive methods...*/

#include <stdio.h>

void star_print_iterative(int num);
void star_print_recursive(int num);

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number to print star pattern:");
    scanf("%d", &num);

    star_print_recursive(num);

    return 0;
}

// Iterative method.
void star_print_iterative(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    /* for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < (2*i-1); j++)
        {
            printf("*");   //To print it in odd numbers like for: 1=1, 2=3, 3=5, 4=7 stars.
        }
        printf("\n");
    } */
}

// Recursive method.
void star_print_recursive(int num)
{
    if (num == 1)
    {
        printf("*\n");
        return;
    }
    star_print_recursive(num-1);
    for (int i = 0; i < (2 * num - 1); i++)
    {
        printf("*");
    }
    printf("\n");
    
}