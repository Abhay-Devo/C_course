/* Write a program  containing function which can check the no.
   of positive integer in the passed array... */

#include <stdio.h>

int check_postive(int arr[], int arr_elements);

int main(int argc, char const *argv[])
{
    int postive_num[] = {0, 1, 2, -5, -9, -4, 5, 9};
    int arr_elements = sizeof(postive_num)/sizeof(postive_num[0]);

    printf("The number of positive integers in the given array is: %d", check_postive(postive_num, arr_elements));
    
    return 0;
}

int check_postive(int arr[], int arr_elements){
    int result = 0;
    for (int i = 0; i < arr_elements; i++)
    {   
        if (arr[i]>0)
        {
            result+=1;
        }
        
    }
    return result;
}
