/* You can change the type of any data (value) using Typecasting like this
   (type you want your data to change in) the value. 
   Example: int i = 55;  printf("%f",(float)i);
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 3;

    // float b = 54/5; // here b is float but the values are default integer 
    float b = (float)54/5;
    
    printf("The value b is: %f\n",b);
    printf("The value b is: %d\n",(int)b); // this is the demonstration of the type casting 

    return 0;
}
//  It's kind of tricky concept