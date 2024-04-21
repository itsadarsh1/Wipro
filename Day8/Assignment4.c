//C Program to Remove all Characters in Second String which are present in First String

#include <stdio.h>
#include <string.h>

void removeCharacters(char *str1,char *str2) 
{
    int hash[256] = {0};
    for (int i=0;i<strlen(str1);i++) 
    {
        hash[(unsigned char)str1[i]] = 1;
    }

    int k=0;
    for (int i=0;i<strlen(str2);i++) 
    {
        if (hash[(unsigned char)str2[i]]==0) 
        {
            str2[k++] = str2[i];
        }
    }
    str2[k] = '\0';
}
int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    removeCharacters(str1, str2);

    printf("Modified second string: %s\n", str2);

    return 0;
}
