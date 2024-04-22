/* Write a program to find the  n-th number made of prime digits

Input Format:
First Line Of Input Contains T Number Of Test Cases
Second Line Of Input Contains an input Number N.

Output Format:
Print the Nth number of sequence and it should be only prime.

Constraints:
1<=T<=100
1<=N<=10000

Examples :
Input  :
1
10
Output :
 33   */

#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) 
{
    if (num<=1)
        return false;
    for (int i=2;i*i<=num;i++) 
    {
        if (num%i==0)
            return false;
    }
    return true;
}

int count_digits(int n) 
{
    int count = 0;
    while (n>0) 
    {
        count++;
        n/=10;
    }
    return count;
}

int find_nth_prime_number(int n) 
{
    int count = 0;
    int num = 2;
    while (count<n) 
    {
        int temp = num;
        while (temp>0 && is_prime(temp%10))
            temp/=10;
        if (temp==0)
            count++;
        if (count==n)
            return num;
        num++;
    }
    return -1;
}

int main() 
{
    int T, N;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);

    for (int i=0;i<T;i++) 
    {
        printf("Enter the value of N for test case %d: ", i+1);
        scanf("%d", &N);
        
        int nth_prime_number = find_nth_prime_number(N);
        if (nth_prime_number != -1) 
        {
            printf("The %dth number made of prime digits is: %d\n", N, nth_prime_number);
        } else 
        {
            printf("Error: Nth prime number not found.\n");
        }
    }
    return 0;
}
