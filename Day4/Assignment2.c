#include <stdio.h>

int main()
{
    int n,i;
    printf("Table:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,i*n);
    }

return 0;
}