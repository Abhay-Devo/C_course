/* There are 4 types of funciton:
    1. Without argument and without return value.
    2. With argument and without return value.
    3. Without argument and with return value.
    4. With argument and with return value.
*/

#include <stdio.h>

// Without argument and without return value.
void myname()
{
    printf(" Abhay singh\n");
}

// With argument and without return value.
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", '*');
    }
}

// Without argument and with return value.
int takenumber()
{
    int i;
    printf("Enter a number ");
    scanf("%d", &i);
    printf("The number is %d\n", i);
    return i;
}

// With argument and with return value.
int sum(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{

    // for case 1
    printf("The name is ");
    myname();

    // For case 2
    int n;
    printstar(5);

    // For case 3
    int c;
    c = takenumber();

    // For case 4
    int d;
    d = sum(5, 6);
    printf("The sum of no. is: %d", d);

    return 0;
}
