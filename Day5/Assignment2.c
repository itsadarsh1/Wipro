#include <stdio.h>

int main()
{
    int n=64;
    int i=1;

    while(i<n)
    {
        printf("%d,",i);
        i=i*2;
    }
    printf("%d",i);
 return 0;   
}