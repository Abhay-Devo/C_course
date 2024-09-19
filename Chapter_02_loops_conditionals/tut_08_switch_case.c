#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    const int marks;
    printf("Enter your age:");
    scanf("%d", &age);

    switch (age)
    {
    case 3:
        printf("Your current age is: 3\n");

        printf("Enter your marks:");
        scanf("%d", &marks);
        switch (marks)
        {
        case 63:
            printf("Your marks are: 63\n");
            break;

        default:
            printf("Your marks are something else\n");
            break;
        }

        break;

    case 13:
        printf("Your current age is: 13\n");
        break;
    case 23:
        printf("Your current age is: 23\n");

        printf("Enter your marks:");
        scanf("%d", &marks);
        switch (marks)
        {
        case 33:
            printf("Your marks are: 33\n");
            break;

        default:
            printf("Your marks are something else\n");
            break;
        }
        break;

    default:
        printf("Your age does not match with the existing cases- 3,13,23.\n");
        break;
    }

    return 0;
}
