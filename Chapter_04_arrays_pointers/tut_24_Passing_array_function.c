// Passing array as function with different methods (direct aray and by pointers)

#include <stdio.h>

int func1(int array[]) // This func using direct array to access the array in the function.
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    // array[0] = 382;                                     /* Note if you change any value here, it gets reflected in main() */
}




void func2(int *ptr) // This func using pointers to access the array in the function.
{
    for (int i = 0; i < 4; i++)
    {
        // printf("The value at %d is %d\n", i, ptr[i]);   // both the line is same.
        printf("The value at %d is %d\n", i, *(ptr + i)); // first one is using derefrencing
    }

    // *(ptr + 2) = 6532;                                  // Note it will change the value of array in main().
}




void func3(int array[2][2])  // This func using 2d arrays in the function.
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d,%d is: %d\n", i, j, array[i][j]);
        }
    }
}




int main(int argc, char const *argv[])
{
    // int arr[] = {23, 19, 9, 4};
    int arr3[2][2] = {{23, 19}, {9, 4}};

    // printf("The value at index 0 is %d\n", arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n", arr[0]);

    // func2(arr);
    // func2(arr);

    func3(arr3);
    return 0;
}
