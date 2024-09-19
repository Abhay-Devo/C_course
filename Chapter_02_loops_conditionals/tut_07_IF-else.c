// this code does not include example but focusing on a quiz to tell the concept
/* Quiz= If a student is passed both Science and Maths exams give him/her gift worths 45rs,
   If he/her only passes in only one subject either in Maths or Science give him/her gift
   worth 15rs.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("If you passed in both Science and Maths enter: 1 \n");
    printf("If you passed in only Science  enter: 2 \n");
    printf("If you passed in only Maths  enter: 3 \n");
    printf("Enter your number:\n");

    scanf("%d", &a);
    printf("You have entered: %d as in how many subject you have passed\n\n", a);

    if (a == 1)
    {
        printf("You have passed in both of your exams, You got an gift of: 45");
    }

    else if (a == 2)
    {
        printf("You have passed your Science exam, You got an gift of: 15");
    }

    else if (a == 3)
    {
        printf("You have passed your Maths exam, You got an gift of: 15");
    }
    else
    {
        printf("Your given input is wrong, Please check your input and try again!!");
    }

    return 0;
}


// ****************************************************************************************************************************


// This is a demonstration of one line if-else statement

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int a;
//     printf("Enter a no.");
//     scanf("%d", &a);
    
//     (a > 5) ? printf("A is greater than 5\n") : printf("A is lesser than 5\n");
//     return 0;
// }
