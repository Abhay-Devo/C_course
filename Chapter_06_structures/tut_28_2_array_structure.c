#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    int salary;
    char name[20];
};

int main(int argc, char const *argv[])
{
// ARRAYS TO STRUCTURE...

    struct employee facebook[5];

    facebook[0].id = 101;
    facebook[0].salary = 2000;
    strcpy(facebook[0].name, "Harry");

    facebook[1].id = 102;
    facebook[1].salary = 1500;
    strcpy(facebook[1].name, "Rohan");

    facebook[2].id = 103;
    facebook[2].salary = 3000;
    strcpy(facebook[2].name, "Shubham");   
     
    printf("The value in facebook[0].id is: %d\n", facebook[0].id);
    printf("The value in facebook[0].salary is: %d\n", facebook[0].salary);
    printf("The value in facebook[0].name is: %d\n", facebook[0].name);
    
    return 0;
}
