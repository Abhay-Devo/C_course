// Print triangular star pattern and inverted triangular star pattern

#include <stdio.h>

int number_input()
{
    int n;
    printf("Enter how many times you want to print the star:");
    scanf("%d", &n);
    return n;
}

void starpattern()
{
    int t = number_input();
    printf("star pattern will be printed %d times\n", t);

    for (int i = 1; i <= t; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void inverse_starpattern()
{
    int ti = number_input();
    printf("inverted star pattern will be printed %d times\n", ti);
    for (int i = ti; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter 0 for triangular star pattern or 1 for inverted triangular star pattern:");
    scanf("%d", &a);
    // if (a == 0)
    // {
    //     starpattern();
    // }
    // else if (a == 1)
    // {
    //     inverse_starpattern();
    // }
    // else
    // {
    //     printf("Please enter a valid input!! \nEither 0 or 1");
    // }

    
// We can also use switch case instead of if else
    switch (a)
    {
    case 0:
        starpattern();
        break;

    case 1:
        inverse_starpattern();
        break;

    default:
        printf("Please enter a valid input!! \nEither 0 or 1");
        break;
    }

    return 0;
}
