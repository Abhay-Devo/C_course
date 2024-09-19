/* Write a program containing a function that reverse
   the array passed to it...*/

#include <stdio.h>

void reversearray(int arr[], int n);

int main(int argc, char const *argv[])
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int arr_element = sizeof(arr)/sizeof(arr[0]);   // gives no of element in the array here (8)
    
    printf("UnReversed array!!!\n\n");    
    for (int i = 0; i < 8; i++)
    {
        printf("The reverse array is %d\n", arr[i]);
    }

    reversearray(arr, arr_element);

    printf("\nReversed array!!!\n\n");    
    for (int i = 0; i < 8; i++)
    {
        printf("The reverse array is %d\n", arr[i]);
    }
    
    
    
    return 0;
}
// You can call the array either directly by value or by reference(address) using pointers its up to you this will work both ways.

void reversearray(int *arr, int n){   
    /* int start = 0;
    int end = n-1;
    int temp;

    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        printf("Swapping: arr[%d] = %d with arr[%d] = %d\n", start, arr[start], end, arr[end]);
        
        start++;
        end--;
    } */
    
    int temp;
    for (int i = 0; i < (n/2); i++)
    {
        temp = arr[i];
        arr[i] = arr[(n-1)-i];
        arr[n-i-1] = temp;
    }
    
}


