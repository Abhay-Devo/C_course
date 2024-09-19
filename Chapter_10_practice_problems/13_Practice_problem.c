/* Write a program to find out the force of attraction on a body
   of mass m exerted by earth (g=9.8). Take mass as input and
   print the result...*/

#include <stdio.h>

float force(float mass);

int main(int argc, char const *argv[])
{
    float mass, test;
    // printf("Enter the mass of the body:");
    // scanf("%f", &mass);       // You can take input in the function or here as well.
    
    test = force(mass);

    // printf("The force exerted by the earth on the body is %.2f", force(mass));
    printf("The force exerted by the earth on the body is %.2f", test);  // This also a way

    return 0;
}

float force(float mass)
{
    printf("Enter the mass of the body:");
    scanf("%f", &mass);
    float result = mass * 9.8;
    return result;
}