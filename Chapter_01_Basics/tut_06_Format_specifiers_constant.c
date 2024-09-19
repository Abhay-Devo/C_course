#include <stdio.h>
# define Pi 3.14

int main(int argc, char const *argv[])
{

// This is to show the working of Format specifiers
    int a = 3;
    float b = 7.333;
    printf("Hello world !!\n");
    printf("The value of a is %2.0d and the value of b is %-8.4f to check if (-8.4)working or not",a,b);
    
    
    
// This is to show the working of constants

    const float c = 4.56755;
    // c = 5.3423; // cannot be done becoz c is already set to be a constant
    printf("The Value of const C is: %d", c);
    

//  #define Preprocessor

    // Pi = 5.33;  // cannot be done becoz Pi is already set to be a constant
    printf("the value of Pi is %f \n ", Pi);

    
// This is to show the working of escape sequence like (\n, \t, \a, \b, etc)

    printf("The value of a is \n and the value of b is \\n to \a check \b if (-8.4)working or not",a,b);
    


// Below is the demostation of a multiline comment
    
    /*  
    here \\n is used if you want to ignore the escape sequence by adding one more (\),
    (\b) is used to for backslash, (\a) is used to produce sound etc 

    */
    return 0;
}