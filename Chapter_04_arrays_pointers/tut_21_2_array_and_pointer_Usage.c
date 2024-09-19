/* -->int *arr[] in the printArray function parameter list defines an array of pointers to int.

   -->numbers in main is an array of pointers to int variables a, b, and c.

   -->Inside printArray, *arr[i] dereferences each pointer to get the integer value...*/



// #include <stdio.h>

// void printArray(int *arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", *arr[i]);  // Dereferencing each pointer
//         printf("%d ", arr[i]);  // address of the elements in array of pointers
//     }
//     printf("\n");
// }

// int main() {
//     int a = 1, b = 2, c = 3;
//     int *numbers[] = {&a, &b, &c};  // Array of pointers to integers
//     int size = sizeof(numbers) / sizeof(numbers[0]);
//     printArray(numbers, size);
//     return 0;
// }



//-----------------------------------------------------------------------------------------------------------



/* -->int (*arr)[5] in printArray is a pointer to an array of 5 integers.

   -->&numbers in main is a pointer to the array numbers, which matches 
      the type expected by printArray.

   -->Inside printArray, (*arr)[i] accesses the array elements.*/



#include <stdio.h>

void printArray(int (*arr)[5]) {  // Expecting a pointer to an array of 5 integers
    for (int i = 0; i < 5; i++) {
        printf("%d ", (*arr)[i]);   // Dereferencing each pointer
    }
    printf("\n");
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    printArray(&numbers);  // Pass pointer to the array
    return 0;
}
