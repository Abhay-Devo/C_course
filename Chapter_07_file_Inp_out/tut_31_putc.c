// here we will see using putc with file i/o operation...

#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *put_ptr;
    put_ptr = fopen("putc_file_03.txt", "w");

    putc('c', put_ptr);     // format = ('value', address_pointer)
    putc('h', put_ptr);
    putc('a', put_ptr);      // putting character by character
    putc('r', put_ptr);

    fclose(put_ptr);
    return 0;
}
