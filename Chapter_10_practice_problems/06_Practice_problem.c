/* Write a program to find out whether a student
   is pass or fail, if it requries total 40% and
   at least 33% in each subject to pass . Assume
   3 subjects and take marks as an input from the
   user */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int eng, math, science;
    float percent;
    printf("Enter the marks of english subject:");
    scanf("%d", &eng);

    printf("Enter the marks of Maths subject:");
    scanf("%d", &math);

    printf("Enter the marks of Science subject:");
    scanf("%d", &science);

    percent = (eng + math + science) * 100 / 300;

    printf("%.2f%%\n", percent);

    /* Note when you are using AND operator you have to be careful of the format of
       value like(40.000000), but when using OR operator you don't have to worry about the
       format of the value like(40),  As seen beolow...*/

    /* if (percent > 40.000000 && eng > 33 && math > 33 && science > 33)
    {
        printf("You have passed in your Examination!!!\n");
    }
    else
    {
        printf("You have Failed in your Examination!!!\n");
    } */

    if (percent < 40 || eng < 33 || math < 33 || science < 33)
    {
        printf("You have failed in your Examination!!!\n");
    }
    else
    {
        printf("You have passed in your Examination!!!\n");
    }
    
    return 0;
}