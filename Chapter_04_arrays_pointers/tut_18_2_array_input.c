// How to input array using loop and then print it...

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of array for position %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of array for position %d is: %d\n", (i + 1), arr[i]);
    }

    return 0;
}


