/* Writing an program in inline assembly to do whole alu operartions only on stack...
   expression = (a + b * c) / (a + d * c - e)... */

#include <stdio.h>

int main() {
    // Local variables
    int a = 10, b = 20, c = 2, d = 4, e = 5;
    int result;

    b = b * c;
    a = a + b;
    int temp1 = a;
    
    a = 10;
    d = d * c;
    a = a + d;
    a = a - e;

    result = temp1/a;
    printf("%d", result);
    

    return 0;
}
