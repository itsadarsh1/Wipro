//Check whether a given number can be expressed as the sum of two prime number
//i/p
//Enter a positive integer: 34
//Output
//34 = 3 + 31

//34 = 5 + 29
//34 = 11 + 23
//34 = 17 + 17
//NoofWays = 4

//NoofWays=-1

#include <stdio.h>
#include <stdbool.h>

bool prime(int n)
{
    if (n<=1) 
    return false;
    if (n<=3) 
    return true;
    if (n%2==0 || n%3==0) 
    return false;
    for (int i=5;i*i<=n;i=i*6) 
    {
        if (n % i == 0 || n % (i + 2) == 0) 
        return false;
    }
    return true;
}

int main() 
{
    int num, count = 0;
    printf("Enter positive integer: ");
    scanf("%d", &num);
   
    printf("Output is :");
    for (int i=2; i<=num/2;i++) 
    {
        if (prime(i) && prime(num-i)) 
        {
            printf("%d = %d + %d\n", num, i, num - i);
            count++;
        }
    }
   
if (count > 0) {
    printf("NoofWays = %d", count);
} 
else {
    printf("\nNoofWays = -1");
}
    return 0;
}
