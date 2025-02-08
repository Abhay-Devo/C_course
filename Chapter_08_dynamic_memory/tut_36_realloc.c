// Here we will see how reallocate memory dynamically using relloc function, you can increase or decrease
// the size of the memory of already decrlared pointer whenever you want ...
// can be done same for malloc funciton...

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *mem_ptr;

    mem_ptr = (int *)calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d element:\n", i);
        scanf("%d", &mem_ptr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The value at %d element is: %d\n", i, mem_ptr[i]);
    }

    // Rellocate the memory of the same pointer(either increase or decrease)the size of the memory

    mem_ptr = (int *)realloc(mem_ptr, 8 * sizeof(int)); // memory size increased of the same pointer

    for (int i = 0; i < 8; i++)
    {
        printf("Enter the %d element:\n", i);
        scanf("%d", &mem_ptr[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        printf("The value at %d element is: %d\n", i, mem_ptr[i]);
    }

    return 0;
}