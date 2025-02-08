// here we will generate a table of given no. and then store in given file...


#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number you want generate the table of:");
    scanf("%d", &num);
    
    FILE *table_ptr;
    table_ptr = fopen("01_PP_table.txt", "w");

    for (int i = 0; i < 10; i++)
    {
        fprintf(table_ptr, "%d X %d = %d\n", num, (i+1), num*(i+1));
    }
    
    return 0;
}