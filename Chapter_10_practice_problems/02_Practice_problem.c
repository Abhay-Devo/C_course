/*Practice problem 2.
  Calculate the area of a circle and modify the same
  program to calculate the volume of a cylinder given
  its radius and height. */

#include <stdio.h>
#define PIE 3.14

int main(int argc, char const *argv[])
{
    int check;
    float r, h;
    // printf("Enter the radius:");
    // scanf("%f", &r);
    printf("Enter 1 or 2 to calc circle area or cylinder area respectively:");
    scanf("%d", &check);
    switch (check)
    {
    case 1:
        printf("Enter the radius of the system:");
        scanf("%f", &r);
        printf("The area of the circle is: %.2f", PIE * r * r);
        // printf("The area of given circle is:%.2f", circle);
        break;

    case 2:
        printf("Enter the radius of the system:");
        scanf("%f", &r);
        printf("Enter the height to calculate the area of cylinder:");
        scanf("%f", &h);
        printf("The area of given cylinder is:%.2f", PIE * r * r * h);
        break;

    default:
        printf("Invalid choice, Please enter an valid input!!!");
        break;
    }

    return 0;
}