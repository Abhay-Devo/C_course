// here we will see how to use getc with the file i/o operation..

#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *get_ptr;
    get_ptr = fopen("getc_file_04.txt", "r");

    // Printing/ reading character by character
    printf("The character that coming from the getc file is: %c\n", fgetc(get_ptr));//format(value, add_ptr)
    printf("The character that coming from the getc file is: %c\n", fgetc(get_ptr));
    printf("The character that coming from the getc file is: %c\n", fgetc(get_ptr));
    printf("The character that coming from the getc file is: %c\n", fgetc(get_ptr));
    printf("The character that coming from the getc file is: %c\n", fgetc(get_ptr));
    printf("The character that coming from the getc file is: %c\n", fgetc(get_ptr));
    printf("The character that coming from the getc file is: %c\n", fgetc(get_ptr));
    printf("The character that coming from the getc file is: %c\n", fgetc(get_ptr));
    printf("The character that coming from the getc file is: %c\n", fgetc(get_ptr));
    
    fclose(get_ptr);

    return 0;
}