// here we will see how to read an entire file using getc and loop...

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c;
    FILE *file_ptr;
    file_ptr = fopen("full_file_read_05.txt", "r");

    c = getc(file_ptr);
    while (c!=EOF)      // EOF means end of file, here loop will be running until char c != end of file
    {
        printf("%c", c);
        c = getc(file_ptr); 
    }
    
    fclose(file_ptr);
    
    return 0;
}