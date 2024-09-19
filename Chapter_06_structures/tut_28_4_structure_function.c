#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    int salary;
    char name[20];
};

void show(struct employee emp){
    printf("The ID of the employee is: %d\n", emp.id);
    printf("The salary of the employee is: %d\n", emp.salary);
    printf("The name of the employee is: %s\n", emp.name);
    emp.id = 105;      // Here we are trying to change the value of id in the function
    
}

int main(int argc, char const *argv[])
{
// STRUCTURE TO FUNCTION...

    struct employee e1;
    struct employee *ptr;
    ptr = &e1;              // addr of e1 is stored in ptr
    

    ptr->id = 102;           
    ptr->salary = 10000;
    strcpy(ptr->name, "Rohan");

    show(e1);

    // but the value will not change, means struct to functions passing in default is call by value
    printf("The id of the employee e1 is: %d", e1.id);    
    
    
    return 0;
}
