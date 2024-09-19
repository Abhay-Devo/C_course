/*Practice problem 1.
  Write a program to calculate area
  of rectangle.
  a. Using hardcode inputs.
  b. Using user-defined inputs.*/

// Using hardcoded inputs

/*#include <stdio.h>

int main(int argc, char const *argv[])
{
    int l = 6;
    int b = 7;
    int sum = l * b;
    printf("The area of the given recatangle is: %d", sum);
    return 0;
}

*/


// Using user-defined inputs

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int l, b;
    printf("Enter length of given rectangle to find its area:");
    scanf("%d", &l);
    printf("Enter breadth of given rectangle to find its area:");
    scanf("%d", &b);
    int sum = l * b;
    printf("The area of the given rectangle is: %d", sum);
    return 0;
}
