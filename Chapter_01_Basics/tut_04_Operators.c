#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int b;
    a=55;
    b=6;
    // for arthematic operators there is simillar
    // type of operator (relational) where "==",">=","<=","!="
    // all this are used 
    
    printf("a + b = %d\n", a+b);
    printf("a != b = %d\n", a!=b);
    printf("a >= b = %d\n", a>=b);
    printf("a / b = %d\n", a/b);
    printf("\n");

    // for logical operators  here any integer are true and non integer are false 
    printf("a && b = %d\n", a&&b);      // (&&)is used for and operations
    printf("a || b = %d\n", a||b);      // (||)is used for or operations
    printf("! b = %d\n", !b);           // (!)is used for not operations 
    printf("! b = %d\n", !a);           //  like you need to reverse the value
    printf("\n");

    // for bitwise operators 
    printf("a & b = %d\n", a&b);         // (&)is used for and operations but in binary values
    printf("a | b = %d\n", a|b);         // (|)is used for or operations but in binary values
    printf("a ^ b = %d\n", a^b);         // (^)is used for exclusiv-or "XOR" operations but in binary values

    // Operators prescedence's screenshot is in the course folder

    return 0;
}
