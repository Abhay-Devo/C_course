/* Write a function sumvector which returns the sum of two vectors given to it.
    the vectors must be two dimensonal...*/

#include <stdio.h>

typedef struct vector
{
    int x;
    int y;
} vtr;

vtr sumvector(vtr v1, vtr v2){
    vtr result;
    result.x= v1.x + v2.x;
    result.y= v1.y + v2.y;
    return result;
}

int main(int argc, char const *argv[])
{
    vtr v1, v2;
    
    v1.x = 5;
    v1.y = 8;

    v2.x = 8;
    v2.y = 8;

    
    printf("The sum of X-vector is: %d,  \nThe sum of Y-vector is: %d",sumvector(v1, v2));
    
    return 0;
}