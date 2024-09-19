/*Quiz number 1.
 Write a program to find the grade of student given his marks below.
  90-100 = A
  80-90 = B
  70-80 = C
  60-70 = D */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int marks;
  printf("Enter the mark of the student to know its grade:");
  scanf("%d", &marks);

  if (marks >= 90 && marks <= 100)
  {
    printf("Grade of the student is A");
  }
  else if (marks >= 80 && marks <= 89)
  {
    printf("Grade of student is B");
  }
  else if (marks >= 70 && marks <= 79)
  {
    printf("Grade of student is C");
  }
  else if (marks >= 60 && marks <= 69)
  {
    printf("Grade of student is D");
  }
  else
  {
    printf("Please enter a valid Grade...");
  }
  return 0;
}