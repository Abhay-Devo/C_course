#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int chance, guess, random, start = 0;
    srand(time(NULL));  // Here you can use 0 as well both meant same thing
    random = rand() % 100 + 1;  // To generate random no. from 1 to 100
    printf("the random number is:%d\n", random);

    printf("Enter how manny chances you want to guess the game:");
    scanf("%d", &chance);
    do
    {
        printf("Enter your guess between 1 to 100:");
        scanf("%d", &guess);
        if (guess < random)
        {
            printf("Higher number please!!!\n");
        }

        else if (guess > random)
        {
            printf("Lower number please!!!\n");
        }
        else
        {
            printf("Hurray, You won the game!!! \nIn %d chances",start);
            break;
        }
        start++;
        printf("You only have %d chances left...\n\n",chance-start);
        

    } while (start < chance);
    if (start == chance)
    {
        printf("Sorry, You lost the game!!!\n");
        printf("The random number is: %d\n", random);
    }

    return 0;
}