/* Write a program to make a custom (user defined) printf funciton using <stdarg.h> library.
   */


#include <stdarg.h>
#include <stdio.h>

int myprintf(char *fmt,...)
{
    char *p;
    va_list ap;        // variable datatype (defined in <stdarg.h> library)
    int iVal;
    double dVal;
    char cVal;

    va_start(ap, fmt);      // Macro funtions used to set the argument pointer(ap) here, to fmt charater string.
    
    for ( p = fmt; *p; p++)
    {
        if (*p!='%')
        {
            putchar(*p);
            continue;
        }
        switch (*++p)
        {
        case 'd':
            iVal = va_arg(ap, int);     // va_arg() macro funtion is setting the variable in ap here to int type
            printf("%d", iVal);
            break;

        case 'f':
            dVal = va_arg(ap, double);   // va_arg() macro funtion is setting the variable in ap here to double type
            printf("%f", dVal);
            break;
        
        case 'c':
            cVal = (char)va_arg(ap, int);
            printf("%c", cVal);
            break;
        
        default:
            break;
        }
        
    }

    va_end(ap);      // Macro function of <stdarg.h> lib, clears up all the stack created here.
    return 0;
}


int main()
{
    char a = 'd';
    myprintf("hello world using my printf function\n");
    myprintf("Integer: %d\n", 42);
    myprintf("Floating-point: %f\n", 3.14159);
    myprintf("Character: %c\n", a);
    return 0;
}