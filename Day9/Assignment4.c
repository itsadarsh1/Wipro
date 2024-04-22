/* Task Details

File Input/Output in C

Task: Core Application Framework

Develop the initial framework for the application that handles command-line
input and output.

Implement the main loop that will invoke the correct file handling based on
user input or file type. */

#include <stdio.h>
#include <string.h>

void handleUserInput(char *input);
void handleFileType(char *filename);

int main() 
{
    char input[100];

    printf("Welcome to File Input/Output Application\n");
    printf("Enter 'exit' to quit.\n");

    while (1) 
    {
        printf("\nEnter a filename or command: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;

        if (strcmp(input, "exit") == 0) 
        {
            printf("Exiting...\n");
            break;
        }

        FILE *file = fopen(input, "r");
        if (file) {
            fclose(file);
            handleFileType(input);
        } else {
            handleUserInput(input);
        }
    }

    return 0;
}

void handleUserInput(char *input) 
{
    printf("Handling user input: %s\n", input);
}
void handleFileType(char *filename) 
{
    printf("Handling file: %s\n", filename);
}
