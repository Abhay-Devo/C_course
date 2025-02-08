// hwere we will see how to manage the memeory of employee id using dynamic memory loaction...


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the length of your employee Id:");
    scanf("%d", &num);
    
    char *id_len;
    id_len = (char*)calloc(num, sizeof(char));


    char e1[*id_len];
    printf("Enter the employee id for e1:");
    scanf("%s", &e1);
    printf("The employee id of employee e1 is: %s\n", e1);

    

    char e2[*id_len];
    printf("Enter the employee id for e2:");
    scanf("%s", &e2);
    printf("The employee id of employee e2 is: %s\n", e2);


    char e3[*id_len];
    printf("Enter the employee id for e3:");
    scanf("%s", &e3);
    printf("The employee id of employee e3 is: %s\n", e3);
    


    
    return 0;
}