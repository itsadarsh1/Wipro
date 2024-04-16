//Sample Input:5
//Sample Output:
//1*2*3*4*5
//6*7*8*9*10
//11*12*13*14*15
//16*17*18*19*20
//21*22*23*24*25

#include <stdio.h>

int main() 
{
    int n;
    int i,j;
    int k= 1;
  printf("Enter number:");
  scanf("%d",&n);
    for (i=1;i<=n;i++) 
    {
        for (j=0;j<n;j++) {
            printf("%d", k+ j);
            if (j<n-1) {
                printf("*");
            }
        }
        k=k+n;
        printf("\n");
    }
    return 0;
}
