// series 0,3,8,15,24,35,48,63,80,99
#include <stdio.h>

int main()
{
    int n=10;
    int i,r;

    for(i=1;i<n;i++)
    {
        r=i*i-1;
        printf("%d,",r);
    }
     printf("%d",i*i-1);
    return 0;   
}