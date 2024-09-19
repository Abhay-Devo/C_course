/*Practice problem 5.
  Write a program to check whether a number is divisible by 97 or not...*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int Check_no;
    printf("Enter a no. to check whether it is divisible by 97 or not:");
    scanf("%d", &Check_no);

    //  With If-Else statement

    /* if (Check_no % 97 == 0)
    {
     printf("Yes, the number %d is divisible by 97.", Check_no);
    }
    else
    {
      printf("NO, The number %d is not divisible by 97.", Check_no);
    } */

    //   With switch statement

    switch (Check_no % 97)
    {
    case 0:
        printf("Yes, the number %d is divisible by 97.", Check_no);
        break;

    default:
        printf("NO, The number %d is not divisible by 97.", Check_no);
        break;
    }

    return 0;
}