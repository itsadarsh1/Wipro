//Print series 1, 2, 4, 8, 16, 32, 64. given n = 8

#include <stdio.h>

int main()
{
    int n=8;
    int i=1;
    int r=n*n;

    while(i<r)
    {
        printf("%d,",i);
        i=i*2;
    }
    printf("%d",i);
 return 0;   
}
