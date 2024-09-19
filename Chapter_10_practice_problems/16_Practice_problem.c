/* Write a program which calculate the sum and average of two values using a function
   and then print both the results in main function using pointers...*/

// My program... lengthy
#include <stdio.h>

int sum(int *num1, int *num2);
float average(int *num1, int *num2);

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Enter both the numbers with space in btw:");
    scanf("%d %d", &num1, &num2);
    printf("print both the values: %d  %d\n", num1, num2);
    printf("The sum of both the values printed here using pointer is: %d\n", sum(&num1, &num2));
    printf("The average of both the values printed here using pointer is: %.2f\n", average(&num1, &num2));

    return 0;
}

int sum(int *num1, int *num2)
{
    int result = *num1 + *num2;
    return result;
}

float average(int *num1, int *num2)
{
    float result = ((float)*num1 + (float)*num2) / 2; // note to get float result you have to divide it with float value..
    return result;                                    // one should be a float no. either numerator or denominator to get float result.
}

// Harry program... short giving multiple result from single func!!!

// #include <stdio.h>

// void sumAndavg(int a, int b, int *sum, float *avg)
// {
//     *sum = a + b;
//     *avg = (float)(*sum) / 2;
// }

// int main(int argc, char const *argv[])
// {
//     int i, j, sum;
//     float avg;
//     sumAndavg(i, j, &sum, &avg);
//     printf("The value of sum is %d \n", sum);
//     printf("The value of average is %.2f \n", avg);

//     return 0;
// }