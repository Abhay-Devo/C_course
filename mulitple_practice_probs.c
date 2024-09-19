// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     printf("The multiplication of 10 in reverse is:\n");
//     for (int i = 10; i >= 1; i--)
//     {
//         printf("10 * %d = %d\n", i, 10 * i);
//     }

//     return 0;
// }

// write a program to add first 10 natural numbers

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int sum = 0, i = 0;
//     /* for (int i = 0; i <= 10; i++)
//     {
//         sum += i;
//     } */

// // Using while loop instead of for loop...
//     while (i<=10)
//     {
//         sum += i;
//         i++;
//     }

//     printf("The sum of first 10 natural numbers is: %d\n", sum);

//     return 0;
// }

// Program to print the added value of the multiplication table of 8...

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int sum = 0, table = 0;
//     for (int i = 1; i <=10; i++)
//     {
//         sum += (8*i);
//     }
//     printf("The sum of all the values of multiplication table of 8 is: %d", sum);

//     return 0;
// }

// Program to calculate the factorial of any given value

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int num, i, fact = 1;
//     printf("Enter the number you want to calculate factorial of:");
//     scanf("%d", &num);

//     if (num == 1 || num == 0)
//     {
//         printf("The factorial of given number is: 1\n");
//     }

//     else
//     {
//         /* for (int i = num; i>=1; i--)
//         {
//             fact*=i;
//         } */
//         for (int i = 1; i <= num; i++)  // both are correct
//         {
//             fact *= i;
//         }

//         printf("The factorial of given number %d is: %d\n",num, fact);
//     }

//     return 0;
// }

/* #include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, prime = 1;
    printf("Enter a number to check whether it is prime or not:");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not a prime number\n", num);
            prime = 0;
            break;
        }
    }
    if (prime == 1)
    {
        printf("%d is a prime number.\n", num);
    }
    // If you want to check big prime no. like asy 7 digit no. you have to use sqrt method.

    return 0;
} */

// #include <stdio.h>

// int recur(int num);

// int main(int argc, char const *argv[])
// {
//     int num;
//     printf("Enter the number:");
//     scanf("%d", &num);

//     printf("The sum of first n natural numbers is: %d", recur(num));

//     return 0;
// }

// int recur(int num)
// {
//     /* if (num==1)   // 0 set the base value for the recursive function
//     {
//         return 1;    // this if statement not require.
//     } */
//     if (num == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return (num + recur(num - 1));
//     }
// }

// #include <stdio.h>

// int main() {
//     int myVar = 10;
//     printf("The address of myVar is: %p\n", (void*)&myVar);
//     return 0;
// }

// practicing pointers.................................................................

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int var = 10;
//     int *ptr = &var;
//     printf("The address of variable var is: %p\n",(void *) &var); // will give add. in hexadecimal
//     // printf("The address of variable var is: %u\n",(void *) &var);  // not appropriate gives add. in unsigned_int
//     printf("The address of variable var is using the pointer: %p\n", (void *)ptr);
//     printf("The value of var using '*' value at address is:%d \n", *ptr);
//     return 0;
// }

// #include <stdio.h>

// void add_checker(int var);

// int main(int argc, char const *argv[])
// {
//     int i = 10;
//     int *ptr = &i;
//     printf("\nThe value of variable i is: %d\n", *ptr);
//     printf("The address of variable i is: %p\n", (void *)ptr);
//     add_checker(i);
//     return 0;
// }

// void add_checker(int var){
//     printf("The address of variable given is: %p\n", (void *)&var);
//     printf("The address of both the var will be different.");

// }

// Uses call by reference and its great example of how to change value of any variable in func.

// #include <stdio.h>

// int inc_value(int *a);

// int main(int argc, char const *argv[])
// {
//     int value;
//     printf("Enter a value to increase it to 10 times:");
//     scanf("%d", &value);
//     printf("The value after increment is: %d\n", inc_value(&value));

//     return 0;
// }

// int inc_value(int *a)
// {
//     // *a = *a * 10;
//     *a *= 10; // both line are correct...
//     return *a;
// }

// Example use of pointer to pointer..

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int i = 10;
//     int *ptr1 = &i;
//     int **ptr2 = &ptr1;

//     printf("The value of i is: %d\n", i);
//     printf("The address of i using ptr1 is: %p\n", (void *)ptr1);
//     printf("The value of i using ptr1 is: %d\n", *ptr1);
//     printf("The address of *ptr1 using pointer to pointer is: %p\n", (void *)ptr2);
//     printf("The value of i using pointer to pointer is: %d\n", **ptr2);
//     printf("The address of ptr2 is: %p\n", (void *)&ptr2);

//     return 0;
// }

// Uses call by value to verify that func can't change the value of main's variable.

// #include <stdio.h>

// int inc_value(int a);

// int main(int argc, char const *argv[])
// {
//     int value;
//     printf("Enter a value to increase it to 10 times:");
//     scanf("%d", &value);
//     inc_value(value);
//     printf("The value of after increment which doesn't change is: %d",value);

//     return 0;
// }

// int inc_value(int a)
// {
//     a*=10;
//     return a;
// }

// practicing array.............................................................................................

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int arr[10] = {5,3,8,9,7,0,4,2,6,1};
//     int *ptr = &arr[2];
/* int *ptr = arr;
   ptr+=2; */
//     printf("Verifing that the ptr is pointing to the third element of array:%p\n",(void *)ptr);
//     printf("Verifing that the ptr is pointing to the third element of array:%d\n",*ptr);

//     return 0;
// }

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int table_num;
//     int table_arr[10];

//     printf("An array of 10 integers that store the multiplication table of given No...\n");
//     printf("Enter the number you want to store multiplication table of in array:");
//     scanf("%d", &table_num);

//     for (int i = 0; i < 10; i++)
//     {
//         table_arr[i] = table_num * (i + 1);
//         printf("The value of arr at position %d  is: %d\n", i, table_arr[i]);
//     }

//     return 0;
// }

// testing problem 20 with custom inputs

// #include <stdio.h>

// void input_taking(int n, int mul_table[]);

// int main(int argc, char const *argv[])
// {
//     int n = 0;
//     int mul_table[n];

//     input_taking(n, mul_table);
//     printf("Testing below for loop \n");

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d", mul_table[i]);
//         printf(",");

//     }

//     int table_arr[n][10];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             table_arr[i][j] = mul_table[i] * (j + 1);
//             printf("The value of arr at position %d,%d is: %d\n", i, j, table_arr[i][j]);
//         }
//     }

//     printf("\nPrinting the whole multiplication table array like an actual array of 2D...\n\n");
//     printf("\nBut limited to only 3 because unable to find logic for this to print n times...\n\n");

//     printf("{");
//     for (int j = 0; j < 10; j++)
//     {
//         printf("(%d,%d,%d)", table_arr[0][j], table_arr[1][j], table_arr[2][j]);
//         if (j < 9)
//         {
//             printf(", ");
//         }
//     }
//     printf("}\n");

//     return 0;
// }

// void input_taking(int n, int mul_table[])
// {

//     printf("Enter the no. of multiplication table you want to store into that array:");
//     scanf("%d", &n);

//     printf("Enter the numbers you want to store table of:");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &mul_table[i]);
//     }
// }

// AI GENERATED FOR ABOVE PROGRAM USING ADVANCE TOPIC WHICH I DIDN'T STUDY TILL NOW.
// ABOVE PROGRAM IS WRONG. IT WILL THROW ERROR

// #include <stdio.h>
// #include <stdlib.h>  // For malloc and free

// void input_taking(int *n, int **mul_table);

// int main(int argc, char const *argv[])
// {
//     int n = 0;
//     int *mul_table = NULL;

//     // Get user input for array size and elements
//     input_taking(&n, &mul_table);

//     // Dynamically allocate memory for 2D array
//     int (*table_arr)[10] = malloc(n * sizeof(*table_arr));
//     if (table_arr == NULL) {
//         printf("Memory allocation failed.\n");
//         free(mul_table);
//         return 1;
//     }

//     // Generate multiplication table
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             table_arr[i][j] = mul_table[i] * (j + 1);
//             printf("The value of arr at position %d,%d is: %d\n", i, j, table_arr[i][j]);
//         }
//     }

//     // Print the multiplication table array
//     printf("\nPrinting the whole multiplication table array like an actual array of 2D...\n\n");
//     printf("{");
//     for (int i = 0; i < n; i++)
//     {
//         printf("{");
//         for (int j = 0; j < 10; j++)
//         {
//             printf("%d", table_arr[i][j]);
//             if (j < 9)
//             {
//                 printf(", ");
//             }
//         }
//         printf("}");
//         if (i < n - 1)
//         {
//             printf(", ");
//         }
//     }
//     printf("}\n");

//     // Free dynamically allocated memory
//     free(mul_table);
//     free(table_arr);

//     return 0;
// }

// void input_taking(int *n, int **mul_table)
// {
//     printf("Enter the no. of multiplication tables you want to store into that array: ");
//     scanf("%d", n);

//     // Allocate memory for mul_table array
//     *mul_table = malloc(*n * sizeof(int));
//     if (*mul_table == NULL) {
//         printf("Memory allocation failed.\n");
//         exit(1);
//     }

//     printf("Enter the numbers you want to store tables of:\n");
//     for (int i = 0; i < *n; i++)
//     {
//         scanf("%d", &(*mul_table)[i]);
//     }
// }

//  3d array (create an 3d array and print their addr in increasing order.)

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int arr_3d[3][4][5];        // here it is int but it can be of anything char, long, double etc

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             for (int k = 0; k < 5; k++)
//             {
//                 printf("The address of array[%d][%d][%d] is: %u\n", i, j, k, &arr_3d[i][j][k]);   // undefined integer addr
//                 // printf("The address of array[%d][%d][%d] is: %p\n", i, j, k, &arr_3d[i][j][k]); // hexadecimal addr

//             }

//         }

//     }

//     return 0;
// }







// STRING PRACTICE PROBLEMS.........................................................................................

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     char str1[40];
//     char str2[40];
//     printf("Enter the string you want in str1: \n");
//     scanf("%s", str1);
//     // gets(str1);

//     printf("Enter the string you want in str2: \n");
//     scanf("%s", str2);

//     puts(str1);
//     puts(str2);

//     return 0;
// }

/* MAKING MY OWN VERSION OF STRCPY FROM <STRING.H>...*/

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     char str[] = "This string has to be copied";
//     char str_cpy[80];

//     int i = 0;

//     while (str[i]!='\0')
//     {
//         str_cpy[i] = str[i];
//         i++;
//     }
//     str_cpy[i] = '\0';

//     printf("%s", str_cpy);

//     return 0;
// }


/* WRITE A FUNCTION TO SLICE THE STING. TAKE M AND N AS THE START AND END POSITION FOR THE SLICE*/

// #include <stdio.h>

// void slice(char str[], int m, int n)
// {
//     int i = 0;
//     while ((m+i)<n)
//     {
//         str[i] = str[m+i];
//         i++;
//     }
//     str[i] = '\0';
// }

// int main(int argc, char const *argv[])
// {
//     char str[] = "The string is to be sliced";
//     int m, n;
//     slice(str, 5, 9);
//     printf("%s",str);
    
//     return 0;
// }




/* Write a program to count the occurence of a given character in a  string...*/

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     char str[] = "hi hey how when hello handshake";
//     char character;
//     int count = 0;
//     printf("Enter the character you want to check the occurence of in the string:");
//     scanf("%c", &character);

//     int i = 0;
//     while (str[i]!='\0')
//     {
//         if (str[i]==character)
//         {
//             count++;
//         }
        
//         i++;
//     }
//     printf("The character you entered occured %d times in the string.\n", count);
    
    
//     return 0;
// }



/* Write a program to check whether a character is present in the string or not...*/

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     char str[] = "This is the given string which we want to check";
//     char char_check;
    
//     printf("Enter the character you want to check that is present in the string or not.\n");
//     scanf("%c", &char_check);
    
//     int i = 0;
//     while (str[i]!= '\0')
//     {
//         if (char_check == str[i])
//         {
//             printf("Yes, The charater '%c' is present in the string.\n", char_check);
//             return 0;
//         }

//         i++;
        
//     }
//     printf("No, The given character '%c' is not present in the sting.\n", char_check);
   
//     return 0;
// }



