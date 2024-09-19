/* Write an program to make an array of 10 integers and then store the
   multiplication table of 5 in it... */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int table_arr[10];
    for (int i = 0; i < 10; i++)
    {
        table_arr[i] = 5 * (i + 1);
        printf("The value of arr at %d postion is %d\n", i, table_arr[i]);
    }
    
    // printf("The value of arr0 is %d", table_arr[8]);    // to check that array is built or not by doing each iteration at a time.
    
    printf("{");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", table_arr[i]);
        if (i < 9)
        {
            printf(", ");
        }
    }
    printf("}");

    return 0;
}