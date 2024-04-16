//Input: 5
//Output:
//         A
//        ABA
//       ABCBA
//      ABCDCBA
//     ABCDEDCBA

#include <stdio.h>

int main() 
{
    int n,i,j;
    char ch;

    printf("Enter n:");
    scanf("%d",&n);

    for (i=0;i<n;i++) 
    {
        for (j=0;j<n-i-1;j++) 
        {
            printf(" ");
        }
        for (ch='A';ch<'A'+i+1;ch++) 
        {
            printf("%c", ch);
            if (ch!='A'+i) 
            {
                printf(" ");
            }
        }
        for (ch='A'+i-1;ch>='A';ch--) 
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
