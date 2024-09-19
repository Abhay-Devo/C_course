#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,a,count = 5;
    printf("hello world\n");

    for (i = 0; i < count; i++)
    {
        printf("%d\nEnter the age: ",i);
        scanf("%d", &a);
        
     // FOR BREAK STATEMENT 
        // if (a>10)          // Exit the loop 
        // {
        //     break;
        // }

    // FOR CONTINUE STATEMENT 
        if (a>10)
        {              // If this condition satisfy then continue statement does not print the code below
            continue;  // and goes again in the loop to check its condition 
        }
        printf("This is to check the working of continue statement: 1\n");
        printf("This is to check the working of continue statement: 2\n");
        printf("This is to check the working of continue statement: 3\n");
        printf("This is to check the working of continue statement: 4");
        
        
    }
    
    return 0;
}
