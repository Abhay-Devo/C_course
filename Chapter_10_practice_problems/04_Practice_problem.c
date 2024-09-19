/*Practice problem 4.
  Write a program to calculate simple interest for a set of
  value representing principal, no. of years and rate of interest. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float p, r, t, si;
    printf("Enter the principal amount on which you want to calculate the Interest:");
    scanf("%f", &p);
    printf("Enter the rate of interest:");
    scanf("%f", &r);
    printf("Enter the time period in years:");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    printf("The simple interest for the given principal, rate and time period is: %.2f", si);
    return 0;
}
