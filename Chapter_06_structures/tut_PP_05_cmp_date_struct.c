// here we will make a program where we make a sturcture to take date and then compare them.

#include <stdio.h>

typedef struct date
{
    int date;
    int month;
    int year;       
}date;

void display(date d){

    printf("Date is: %d/%d/%d\n", d.date, d.month, d.year); 

}

int datecmp(date d1, date d2){
    // comparing year if one is greater that will be the result, else it will check month.
    if (d1.year>d2.year)
    {
        return 1;
    }
    if (d1.year<d2.year)
    {
        return -1;
    }

    // comparing month if one is greater that will be the result, else it will check date.
    if (d1.month>d2.month)
    {
        return 1;
    }
    if (d1.month<d2.month)
    {
        return -1;
    }

    // comparing date if one is greater that will be the result, else it will return 0 (both date equal).
    if (d1.date>d2.date)
    {
        return 1;
    }
    if (d1.date<d2.date)
    {
        return -1;
    }

    return 0;   // both dates are equal
}

int main(int argc, char const *argv[])
{
    date d1, d2;

    printf("Enter the first date in dd/mm/yyyy format:");
    scanf("%d/%d/%d", &d1.date, &d1.month, &d1.year);

    printf("Enter the second date in dd/mm/yyyy format:");
    scanf("%d/%d/%d", &d2.date, &d2.month, &d2.year);
    
    display(d1);
    display(d2);
    printf("\n");
    
    int result = datecmp(d1, d2);
    switch (result)
    {
    case 1:
        printf("First date is bigger:\n");
        display(d1);
        break;

    case -1:
        printf("Second date is bigger:\n");
        display(d2);
        break;

    case 0:
        printf("Both dates are equal!!!");
        break;
    
    default:
        printf("Something went wrong!!!");
        break;
    }
    return 0;
}