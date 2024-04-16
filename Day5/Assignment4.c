//Question 4: Find out the sum of series   3+33+333+3333+33333+333333
#include <stdio.h>

int main() 
{
    int t=6;
    int sum=0;
    int n=3;
    for (int i=1;i<=t;i++) 
    {
        printf("%d",n);
        sum=sum+n;
        if (i<t) {
            printf("+");
        }
        n=n*10+3;
    }
    printf("=%d\n", sum);

    return 0;
}
