/*  3. Read the contents of the file in reverse order and print it on the another file */

#include <stdio.h>

int main() 
{
    FILE *input_file = fopen("employee_records.txt", "r");
    FILE *output_file = fopen("reversed_records.txt", "w");
    char line[100];
    int count=0;

    if (input_file==NULL || output_file==NULL) 
    {
        printf("Error opening files!\n");
        return 1;
    }

    while (fgets(line, sizeof(line), input_file)) 
    {
        count++;
    }

    fseek(input_file, 0, SEEK_SET);
    for (int i=count-1;i>=0;i--) 
    {
        fgets(line, sizeof(line), input_file);
        fputs(line, output_file);
    }

    fclose(input_file);
    fclose(output_file);

    printf("Contents of file reversed and saved to reversed_records.txt\n");

    return 0;
}
