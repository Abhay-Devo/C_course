// Here we will see how allocate memory dynamically using malloc function...

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *mem_ptr;
    mem_ptr = (int *) malloc(5 * sizeof(int)); // (typecasting) malloc(no. of variable * type of variable)
    // typecasting is neccesary as malloc always return void pointer 

    if (mem_ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program if malloc fails(normally it doesn't fail, but worse case scanrio)
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d element:\n",i);
        scanf("%d", &mem_ptr[i]);
        
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The value at %d element is: %d\n", i, mem_ptr[i]);
        
    }
    // we can take input from user to allocate teh memeory like here it's 5 but it can be user given
    return 0;
}