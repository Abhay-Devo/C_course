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
// POINTERS TO STRUCTURE ...

    struct employee e1;
    struct employee *ptr;
    ptr = &e1;              // addr of e1 is stored in ptr



    // Initializing datatype using pointer
    (*ptr).id = 101;        
    (*ptr).salary = 12000;      // (*ptr) is derefrencing to e1
    
    printf("The id of e1 employee is: %d\n",e1.id);
    printf("The salary of e1 employee is: %d\n",e1.salary);
    
    printf("\n");
    

    // Instead of writing (*ptr.___) you can write

    ptr->id = 102;           // (->) Known as arrow operator just a shortcut for (*ptr).id
    ptr->salary = 10000;

    printf("The id of e1 employee is: %d\n",e1.id);        // the value of e1 is getting overwritten here(no worries)
    printf("The salary of e1 employee is: %d\n",e1.salary);

    
    return 0;
}
