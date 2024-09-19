// Way to print array of undefined size

#include <stdio.h>

int main(int argc, char const *argv[])
{
   // Define an array...
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);


//Print the elements of the array

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
