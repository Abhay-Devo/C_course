#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s1[] = "Hello";
    char s2[] = "World";
    char s3[30];

    /* In strcmp the ASCII value of each char of str is compared to other one like here s2 with s1 and 
       then s1 with s2 and if the value of first str is smaller than second str then result will be negative 
       else positive  and if each char of both string is same the result will be 0*/
       
    printf("The compare for string s1 from s2 is: %d\n",strcmp(s2,s1));
    printf("The compare for string s2 from s1 is: %d\n",strcmp(s1,s2)); 

    puts(strcat(s1,s2));  // adding s1 and s2 and stored in s1 and then print it using puts

    strcpy(s3, s1);   // copy s1 into s2 after s1 and s2 are added using strcat
    printf("%s",s3);

    printf("\nThe length of string s1 is: %d\n",strlen(s1)); // after s1 and s2 are added and stored in s1
    printf("The length of string s2 is: %d\n",strlen(s2));

    printf("The reverse string of s1 is: \n");
    puts(strrev(s1));
    printf("The reverse string of s2 is: \n");
    puts(strrev(s2));

    return 0;
}
