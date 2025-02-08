// Here we will see how to free memory dynamically using free function, created by malloc and calloc...

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *mem_ptr;
    double *waste_ptr;

    mem_ptr = (int *) malloc(50 * sizeof(int));  

    for (int i = 0; i < 50; i++)
    {
        waste_ptr = (double *) malloc(60000000 * sizeof(int)); //create alot of junk memory not of any use
        printf("Enter the %d element:\n",i);
        scanf("%d", &mem_ptr[i]);

        free(waste_ptr);   
        // destroying all the extra/junk memory after they are used to reduce memory consumption,
        // if not cleaned up alot of junk/waste memory is created which has no use
        
    }

    for (int i = 0; i < 50; i++)
    {
        printf("The value at %d element is: %d\n", i, mem_ptr[i]);
        
    }
    // we can take input from user to allocate teh memeory like here it's 5 but it can be user given
    return 0;
}