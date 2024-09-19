/* Write a program to make an array of [3][10] to store
   the multiplication table of 2, 7, and 9 respectively...*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int table_arr[3][10];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            switch (i)
            {
            case 0:
                table_arr[i][j] = 2 * (j + 1);
                printf("The value of arr at position %d,%d is: %d\n", i, j, table_arr[i][j]);
                break;
            case 1:
                table_arr[i][j] = 7 * (j + 1);
                printf("The value of arr at position %d,%d is: %d\n", i, j, table_arr[i][j]);
                break;
            case 2:
                table_arr[i][j] = 9 * (j + 1);
                printf("The value of arr at position %d,%d is: %d\n", i, j, table_arr[i][j]);
                break;

            default:
                break;
            }
        }
    }
    printf("\nPrinting the whole multiplication table array like an actual array of 2D...\n\n");
     
    printf("{");
    for (int j = 0; j < 10; j++) {
        printf("(%d,%d,%d)", table_arr[0][j], table_arr[1][j], table_arr[2][j]);
        if (j < 9) {
            printf(", ");
        }
    }
    printf("}\n");

    return 0;
}