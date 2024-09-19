/* 1 :-> Matrix Diagonal Sum with Conditional Break.

   PROBLEM: Write a program to calculate the sum of the main diagonal elements of an n x n matrix.
   Use nested loops to traverse the matrix, and use a conditional statement to stop summing if any
   element on the diagonal is negative. Use break to exit the loops prematurely if needed.
   Additionally, use pointers to access and manipulate the elements of the matrix.

   CONCEPTS: Loops, conditionals, arrays, pointers, break statement...*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    // Input matrix size
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    // Declare and input the matrix
    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Initialize sum
    int sum = 0;

    // Calculate sum of main diagonal elements
    for (int i = 0; i < n; i++)
    {
        int *diagonalElement = &matrix[i][i]; // Pointer to the diagonal element
        if (*diagonalElement < 0)
        {
            printf("Negative diagonal element encountered: %d\n", *diagonalElement);
            break; // Exit the loop if a negative element is found
        }

        sum += *diagonalElement;
    }

    // Output the result
    printf("Sum of the main diagonal elements: %d\n", sum);

    return 0;
}





/*  2 :-> 
    */