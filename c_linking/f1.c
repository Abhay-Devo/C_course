#include <stdio.h>
#include "f2.h"

int main(int argc, char const *argv[])
{
    int x = 5;
    int result = fun2(x);
    printf("the result of fun2 function is another file is: %d", result);
    
    return 0;
}