/* Write a program to reverse the given array... */

#include <stdio.h>

void arr_reverse(int *arr, int size);

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("%d\n", size);

    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }

    arr_reverse(arr, size);

    return 0;
}

void arr_reverse(int *arr, int size)     // both *arr and arr[] is right one is doing call by reference and other call by value.
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[(size - 1) - i];
        arr[(size - 1) - i] = temp;

        // printf("%d\n", arr[i]);
    }
    printf("\n");
    
    // printing the reversed array

    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
}