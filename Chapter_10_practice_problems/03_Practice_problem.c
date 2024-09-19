/*Practice problem 3.
  Write a program to convert Celcius degree to farenheit. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float c, f;
    printf("Enter the temperature into celcius to convert it into farenheit:");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("The temperature in farenheit would be: %.2f farenheit", f);
    return 0;
}