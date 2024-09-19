#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("%lu", sizeof("char"));
    printf("\n");
    printf("%lu", sizeof("int"));
    printf("\n");
    printf("%lu", sizeof("float"));
    printf("\n");
    printf("%lu", sizeof("double"));
    
    return 0;
}
