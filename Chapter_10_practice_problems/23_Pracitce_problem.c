/* ENCRPYT THE GIVEN STRING BY ADDING 1 TO ITS ASCII VALUE...
   AND THEN DECRYPT IT USING A DECRYPT FUNCTION...*/

#include <stdio.h>

void decrypt_str(char encrypt_str[]);

int main(int argc, char const *argv[])
{
    char str[] = "The string is going to be encrypted";
    char encrypt_str[80];
    int i = 0;

    while (str[i] != '\0')
    {
        int ascii_value = (int)str[i];
        ascii_value += 1;
        char temp = (char)ascii_value;
        encrypt_str[i] = temp;
        i++;
    }

    encrypt_str[i] = '\0';

    printf("The encrpyted string created by adding 1 to ASCII value of every character in the sting is:\n");
    printf("%s\n\n", encrypt_str);

    decrypt_str(encrypt_str);

    return 0;
}

void decrypt_str(char encrypt_str[])
{
    int i = 0;
    char str[80];

    while (encrypt_str[i] != '\0')
    {
        int ascii_value = (int)encrypt_str[i];
        ascii_value -= 1;
        char temp = (char)ascii_value;
        str[i] = temp;
        i++;
    }
    str[i] = '\0';

    printf("The decrypted string decoded by subtracting 1 to ASCII value of every character in the sting is:\n");
    printf("%s", str);
}







/* SAME PROGRAM BUT USING CHAR POINTER AND USING CALL BY REFERENCE... */


// #include <stdio.h>

// void decrypt_str(char *encrypt_str);

// int main(int argc, char const *argv[])
// {
//     char *str = "The string is going to be encrypted";
//     char encrypt_str[80];
//     int i = 0;

//     while (*str != '\0')
//     {
//         int ascii_value = (int)*str;
//         ascii_value += 1;
//         char temp = (char)ascii_value;
//         encrypt_str[i] = temp;
//         i++;
//         str++;
//     }

//     encrypt_str[i] = '\0';

//     printf("The encrpyted string created by adding 1 to ASCII value of every character in the sting is:\n");
//     printf("%s\n\n", encrypt_str);

//     decrypt_str(encrypt_str);

//     return 0;
// }

// void decrypt_str(char *encrypt_str)
// {
//     int i = 0;
//     char str1[80];

//     while (*encrypt_str != '\0')
//     {
//         int ascii_value = (int)*encrypt_str;
//         ascii_value -= 1;
//         char temp = (char)ascii_value;
//         str1[i] = temp;
//         i++;
//         encrypt_str++;
//     }
//     str1[i] = '\0';

//     printf("The decrypted string decoded by subtracting 1 to ASCII value of every character in the sting is:\n");
//     printf("%s", str1);
// }