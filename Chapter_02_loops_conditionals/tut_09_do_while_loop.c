#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, index=0;
    printf("Enter how many times you want to run your loop: ");
    scanf("%d", &num);

    do
    {
        printf("%d\n",index);       // To print from start until condition is satisfy
        
        // printf("%d\n",index+1);  // To print from start+1 until the condition+1 is satisfy
        
        index+=1;                   // Means (index = index + 1)

    } while (index<num);
    
    return 0;
}
// In this loop the program will run atleast one and then check for the condition 
// (if met= exit), (if not=  run until condition get satisfy) 
