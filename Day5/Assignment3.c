//Print Sum of Even and  sum of odd values between 1 to 50.
#include <stdio.h>

int main()
{
    int sumeven=0;
    int sumodd=0;
    int n;
    for(n=1; n<=50; n++)
    {
        if(n%2==0)
        {
            sumeven=sumeven+n;
        }
        else
        {
            sumodd=sumodd+n;
        }
    }
    printf("Sum of even number 1 to 50 is:%d",sumeven);
    printf("\nSum of odd number 1 to 50 is:%d\n",sumodd);
 return 0;   
}
