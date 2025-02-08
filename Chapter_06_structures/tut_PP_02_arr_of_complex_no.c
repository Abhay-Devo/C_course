// here we will see how to create an array of 5 complex numbers and then display them using display func

#include <stdio.h>

typedef struct complex
{
    int real;
    int img;
}comp;

void display(comp c){
    printf("The value for real number is: %d\n", c.real);
    printf("The value for imaginery number is: %d\n", c.img);
    
}

int main(int argc, char const *argv[])
{
    comp com_num[5];
    for (int  i = 0; i < 5; i++)
    {
        printf("Enter the number for real part at position [%d]:", i+1);
        scanf("%d", &com_num[i].real);

        printf("Enter the number for imaginery part at position [%d]:", i+1);
        scanf("%d", &com_num[i].img);     
        
    }
    printf("\n");
    
    for (int  i = 0; i < 5; i++)
    {      
        display(com_num[i]);
    }
    
    return 0;
}