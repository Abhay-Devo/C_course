// Exercise to build an unit convertor of some important units llke given below.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char input, q;
    float cmtoinches = 0.393701;
    float kmtomile = 0.621371;
    float poundtokgs = 0.453592;
    float inchestofoot = 0.0833333;
    float inchestometer = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter q to exit the program\n 1. cmtoinches \n 2. kmtomile \n 3. poundtokgs \n 4. inchestofoot \n 5. inchestometer \n");
        scanf(" %c", &input);

        switch (input)
        {
        case 'q':
            printf("Quiting the program ...");
            goto end;
            break;
        case '1':
            printf("Enter the number you want to convert into different unit: \n");
            scanf(" %f", &first);
            second = first * 0.393701;
            printf("%f cm is equal to %f inches \n\n", first, second);
            break;
        case '2':
            printf("Enter the number you want to convert into different unit: \n");
            scanf(" %f", &first);
            second = first * 0.621371;
            printf("%f kilometer is equal to %f mile \n\n", first, second);
            break;
        case '3':
            printf("Enter the number you want to convert into different unit: \n");
            scanf(" %f", &first);
            second = first * 0.453592;
            printf("%f pound is equal to %f kilogram \n\n", first, second);
            break;
        case '4':
            printf("Enter the number you want to convert into different unit: \n");
            scanf(" %f", &first);
            second = first * 0.0833333;
            printf("%f inches is equal to %f foot \n\n", first, second);
            break;
        case '5':
            printf("Enter the number you want to convert into different unit: \n");
            scanf(" %f", &first);
            second = first * 0.0254;
            printf("%f inches is equal to %f meters \n\n", first, second);
            break;

        default:
            printf("Invalid input. Please enter a number between 1 and 5 or 'q' if you want to quit.\n");
            break;
        }
    }
end:

    return 0;
}
