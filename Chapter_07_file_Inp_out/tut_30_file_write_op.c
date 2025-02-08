// here we will see how to read from different files into our c program...


#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 55;
    FILE *write_ptr = fopen("write_file_02.txt", "w");

    // This fprintf function is used to write something on different file, printf used to print something
    fprintf(write_ptr, "The writted number from the c file using fprintf is: %d\n", num);
    fprintf(write_ptr, "You can write multiple lines like this if you want.\n");

    fclose(write_ptr);

    return 0;
}