/* 1. Addition of number to a pointer
   2. Subtraction of a number from a pointer
   3. Subtraction of one pointer from another
   4. Comparison of two pointer on a single variable.
   Do all those operations in the program...*/

// Operation 1 and 2 in combined.

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int var = 10;
//     int *ptr = &var;
//     printf("Note the address of var is printed in integer form using (%%u) operator not in hexadecimal.\n");

//     printf("The address of integer var is: %u\n",ptr);
//     // ptr++;  // operation 1.
//     ptr--;     // operation 2.
//     printf("The address of integer var after operation 1 is: %u\n",ptr);

//     return 0;
// }

// Operation 3....

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int arr[5] = {5,8,2,7,1};
//     int *ptr1 = &arr[0];
//     int *ptr2 = &arr[1];
//     printf("Note the address of var is printed in integer form using (%%u) operator not in hexadecimal.\n");

//     printf("The address of array at 0 is: %u\n",ptr1);
//     printf("The address of array at  is: %u\n",ptr2);

//     printf("The address of array(0,1) after operation 3 is: %u byte.\n",(ptr2 - ptr1));
//     return 0;
// }

// test operation not  on list,...

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int var = 10;
//     int *ptr1 = &var;
//     int *ptr2 = &var;

//     printf("Note the address of var is printed in integer form using (%%u) operator not in hexadecimal.\n");

//     printf("The address of integer var using ptr1 is: %u\n", ptr1);
//     printf("The address of integer var using ptr1 is: %u\n", ptr2);
//     printf("This program is pointing two pointers on single variable.\n");

//     return 0;
// }

// operation 4...

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int arr[5] = {5, 8, 2, 7, 3};
//     int *ptr1 = &arr[0];
//     int *ptr2 = &arr[3];
//     printf("Note the address of var is printed in integer form using (%%u) operator not in hexadecimal.\n");

//     printf("The address of array at 0 position using ptr1 is: %u\n", ptr1);
//     printf("The address of array at 1 position using ptr2 is: %u\n", ptr2);

//     if (ptr1 > ptr2)
//     {
//         printf("Pointer ptr1 is pointing to a higher memory address than ptr2.\n");
//     }
//     else if (ptr1 < ptr2)
//     {
//         printf("Pointer ptr1 is pointing to a lower memory address than ptr2.\n");
//     }
//     else
//     {
//         printf("Pointer ptr1 and ptr2 are pointing to the same memory address.\n");
//     }

//     return 0;
// }

