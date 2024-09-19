// Here we will see use of typedef.


#include <stdio.h>
#include <string.h>

// struct employee
// {
//     int id;
//     int salary;
//     char name[20];
// };


// Instead of simply defining struct I can do->...
typedef struct employee
{                          // typedef simply create a shortcut name for this struct
    int id;
    int salary;
    char name[20];
} emp;    // Now instead of writing(struct employee) everywhere i can just write(emp)


void show(emp emp1){
    printf("The ID of the employee is: %d\n", emp1.id);
    printf("The salary of the employee is: %d\n", emp1.salary);
    printf("The name of the employee is: %s\n", emp1.name);
    
}

int main(int argc, char const *argv[])
{
    /* struct employee e1;
    struct employee *ptr; */

    emp e1;     // emp is a nickname/alias name for the (struct employee)
    emp *ptr;
    ptr = &e1;              // addr of e1 is stored in ptr
    

    ptr->id = 102;           
    ptr->salary = 10000;
    strcpy(ptr->name, "Rohan");

    show(e1); 
    
    
    return 0;
}
