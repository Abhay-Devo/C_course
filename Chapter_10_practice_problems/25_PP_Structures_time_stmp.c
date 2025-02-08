// here we will compare timestamp datatype made by struct function, and check which timestamp is bigger.
// Practice structures program

#include <stdio.h>

typedef struct timestmp
{
    int sec;
    int min;
    int hour;
    int date;
    int month;
    int year;       
}timestmp;

void display(timestmp ts){

    printf("timestmp is: %d/%d/%d %d-%d-%d", ts.year, ts.month, ts.date, ts.hour, ts.min, ts.sec); 

}

int timestmpcmp(timestmp ts1, timestmp ts2){
    // comparing year if one is greater that will be the result, else it will check month.
    if (ts1.year>ts2.year)
    {
        return 1;
    }
    if (ts1.year<ts2.year)
    {
        return -1;
    }

    // comparing month if one is greater that will be the result, else it will check date.
    if (ts1.month>ts2.month)
    {
        return 1;
    }
    if (ts1.month<ts2.month)
    {
        return -1;
    }

    // comparing date if one is greater that will be the result, else it will check hour.
    if (ts1.date>ts2.date)
    {
        return 1;
    }
    if (ts1.date<ts2.date)
    {
        return -1;
    }

    // comparing hour if one is greater that will be the result, else it will check minutes.
    if (ts1.hour>ts2.hour)
    {
        return 1;
    }
    if (ts1.hour<ts2.hour)
    {
        return -1;
    }

    // comparing minute if one is greater that will be the result, else it check seconds.
    if (ts1.min>ts2.min)
    {
        return 1;
    }
    if (ts1.min<ts2.min)
    {
        return -1;
    }

    // comparing second if one is greater that will be the result, else it will return 0 (both timestmp equal).
    if (ts1.sec>ts2.sec)
    {
        return 1;
    }
    if (ts1.sec<ts2.sec)
    {
        return -1;
    }

    return 0;   // both timestmps are equal
}

int main(int argc, char const *argv[])
{
    timestmp ts1, ts2;

    printf("Enter the first timestmp in yyyy/mm/dd hh-mm-ss format:");
    scanf("%d/%d/%d %d-%d-%d", &ts1.year, &ts1.month, &ts1.date, &ts1.hour, &ts1.min, &ts1.sec);

    printf("\nEnter the second timestmp in yyyy/mm/dd hh-mm-ss format:");
    scanf("%d/%d/%d %d-%d-%d", &ts2.year, &ts2.month, &ts2.date, &ts2.hour, &ts2.min, &ts2.sec);

    

    display(ts1);
    printf("\n \n");
    display(ts2);
    printf("\n \n");
    
    int result = timestmpcmp(ts1, ts2);
    switch (result)
    {
    case 1:
        printf("\nFirst timestmp is bigger:\n");
        display(ts1);
        break;

    case -1:
        printf("\nSecond timestmp is bigger:\n");
        display(ts2);
        break;

    case 0:
        printf("\nBoth timestmps are equal!!!");
        break;
    
    default:
        printf("\nSomething went wrong!!!");
        break;
    }
    return 0;
}