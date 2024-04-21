/*alternativel merge two strings
i/p
Bhima
ABCDEOLM
o/p
BAhBiCmDaEOLM */

#include <stdio.h>
#include <string.h>

void alternateMerge(char *str1, char *str2, char *result) 
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int i,j,k;

    for (i=0,j=0,k=0;i<len1 && j<len2;i++,j++) 
    {
        result[k++] = str1[i];
        result[k++] = str2[j];
    }

    while (i<len1) {
        result[k++] = str1[i++];
    }
    while (j<len2) {
        result[k++] = str2[j++];
    }

    result[k] = '\0';
}

int main() {
    char str1[100], str2[100], result[200];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    alternateMerge(str1, str2, result);

    printf("Merged string: %s\n", result);

    return 0;
}
