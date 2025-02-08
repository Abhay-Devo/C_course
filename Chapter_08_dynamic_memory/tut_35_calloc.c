// Here we will see how allocate memory dynamically using calloc function...

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *mem_ptr;
    int num;
    printf("Enter how long you want the size of array(bytes of memeory) you want:");
    scanf("%d", &num);
    
    mem_ptr = (int *) calloc(num, sizeof(int));  

    if (mem_ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program if malloc fails(normally it doesn't fail, but worse case scanrio)
    }
    
// Note if you don't give any value to the allocated memory by calloc it assign a default 0 to everyone
    for (int i = 0; i < num; i++)
    {
        printf("Enter the %d element:\n",i);
        scanf("%d", &mem_ptr[i]);
        
    }

    
    for (int i = 0; i < num; i++)
    {
        printf("The value at %d element is: %d\n", i, mem_ptr[i]);
        
    }
    // taking input from user can do same also in malloc funation
    return 0;
}