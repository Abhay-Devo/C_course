// here we learn about declareation and intialization at same time

#include <stdio.h>

int main(int argc, char const *argv[])
{
// This is called declareation and intialization at same time

    // printing 1-d array using loop...

    int marks[5] = {5, 6, 2, 5, 4};
    for (int i = 0; i < 5; i++)
    {
        printf("The marks of students are: %d", marks[i]);
        printf("\n");
    }

    
    return 0;
}
