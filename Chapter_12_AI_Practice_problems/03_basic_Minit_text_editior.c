/* Mini Text Editor (Basic Operations)

    Create a simple text editor program that can:
        Read a string from the user.
        Add new text at the end.
        Replace a word in the string.
        Print the modified text.

    Goal: Work with strings and basic file operations...*/

#include <stdio.h>
#include <string.h>

void title()
{
    printf("\n");

    printf("Enter what do you want to do:\n\n");
    printf("0.  To Exit the program...\n");
    printf("1.  To Print the modified text on the console.\n");
    printf("2.  To add text in the end of the file.\n");
    printf("3.  To replace a word in the file.\n");
    printf("4.  To replace the whole text from the file.\n");
    printf("\n");
}

void file_read()
{
    FILE *read_ptr;
    read_ptr = fopen("03_text_editor.txt", "r");

    printf("\n");
    printf("The text inside the file is:\n");

    char c = getc(read_ptr);
    while (c != EOF) // EOF means end of file, here loop will be running until char c != end of file
    {
        printf("%c", c);
        c = getc(read_ptr);
    }
    fclose(read_ptr);
    printf("\n");
}

void file_write(char *user_str)
{
    FILE *write_ptr;
    write_ptr = fopen("03_text_editor.txt", "a");

    printf("Enter what do you want to add in the file:");
    getchar();
    gets(user_str);
    fprintf(write_ptr, "%s\n", user_str);

    printf("\n");
    printf("Text sucessfully added...");
    printf("\n");
    fclose(write_ptr);
}

void replace_word(char *user_str)
{
    FILE *replace_ptr;
    replace_ptr = fopen("03_text_editor.txt", "r");

    printf("Enter the word to replace from the file:");
    scanf("%s", user_str);

    const char tempword[10];
    while (fscanf(replace_ptr, "%s", tempword) == 1)
    {
        if (strcmp(tempword, user_str) == 0)
        {
            fclose(replace_ptr);
            printf("Word found");
            printf(tempword);
        }
    }
}

int main(int argc, char const *argv[])
{
    int exit = 1;
    int task_inp;
    char user_str[90];

    while (exit != 0)
    {
        // printing the title menu
        title();

        // task_input to know what to do.
        printf("Please enter the input:");
        scanf("%d", &task_inp);

        // executing user task
        switch (task_inp)
        {
        case 0:
            exit = 0;
            printf("Exiting the program!!!");
            break;

        case 1:
            file_read();
            break;

        case 2:
            file_write(user_str);
            break;

        case 3:
            replace_word(user_str);
            break;
        case 4:

            break;

        default:
            printf("Invalid Input!!!.");
            break;
        }
    }

    return 0;
}