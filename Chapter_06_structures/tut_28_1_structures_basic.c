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

// INITIALIZATION OF DATATYPE (after defining it).   (TYPE-1)

    struct employee e1;
    e1.id = 01;
    e1.salary = 55000;

// INITIALIZATION OF DATATYPE (TYPE-2)

    struct employee e2;
    struct employee e2 = {01, 5550, "Abhishek"};

// SETTING THE DATATYPE OF STRUCT TO ZERO
    struct employee e3;
    struct employee e3 = {0};                       // this set all elements to zero

    return 0;
}
