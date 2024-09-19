// This is an example of 2-d array, and how its get printed using loop

#include <stdio.h>

int main(int argc, char const *argv[])
{

    int marks[2][5] = {{5, 1, 2, 3, 4}, {9, 8, 7, 4, 6}}; 
    // left hand side brackets tell about 2 rows and 5 columns in the array


    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    

    return 0;
}


