#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i=0;
    while (i<51)
    {
        printf("The value of i is: %d\n", i);
        i+=1;  // this is compund operator it will increment(add) i to given value here 1.
        printf("The value of i is: %d\n", i++); // this will print value of i and then add 1 to it. 
        printf("The value of i is: %d\n", ++i); // this will add 1 to value of i then print it.
       
        // same goes with (-, *, /, % every operator)
    }
    

    return 0;
}
