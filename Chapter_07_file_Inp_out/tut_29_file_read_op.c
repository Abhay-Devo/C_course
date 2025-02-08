// here we will see how to read from different files into our c program....

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    int num3;
    
    FILE *file_ptr;        // making a pointer to the file 
    file_ptr = fopen("read_file_01.txt", "r");  // opening the file to read it, into that pointer

    if (file_ptr == NULL) {
        printf("Error: Could not open file.\n");
        return 1;  // Return an error code
    }
    
    else
    {
        fscanf(file_ptr, "%d", &num1);  //just like scanf take input but from diff file which is currently opened
        fscanf(file_ptr, "%d", &num2);
        fscanf(file_ptr, "%d", &num3);

        fclose(file_ptr);    // closing the opened file, not mandatory but good practice

        printf("First number num1: %d\n", num1);
        printf("First number num2: %d\n", num2);
        printf("First number num3: %d\n", num3);
    }
    return 0;
}