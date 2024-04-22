/* .Program to find nth number made of given four digits 1, 4,6 and 9 as the only digits..

Input Format:

The First Line Of Input Contains T no of test cases
The Second Line Of Input Contains N as input taken.

Output Format:
Print the number of digits in the nth number .

Constraints:

1<=T<=100
1<=N<=100

Examples:

Input : 6
Output : 14

1,4 6, 9.11,14

Input : 21
Output : 111 */

#include <stdio.h>

int count_digits(int n) 
{
    int count = 0;
    while (n>0) 
    {
        count++;
        n /= 10;
    }
    return count;
}

int find_nth_number(int n) 
{
    int count = 0;
    int num = 1;
    while (count<n) 
    {
        int temp = num;
        while (temp>0) 
        {
            int digit = temp % 10;
            if (digit != 1 && digit != 4 && digit != 6 && digit != 9)
                break;
            temp /= 10;
        }
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
    int t, n;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);

    for (int i=0;i<t;i++) 
    {
        printf("Enter the value of N for test case %d: ", i+1);
        scanf("%d", &n);
        
        int nth_number = find_nth_number(n);
        if (nth_number !=-1) 
        {
            printf("The %dth number made of the digits 1, 4, 6, and 9 is: %d\n", n, nth_number);
            printf("Number of digits in the %dth number: %d\n", n, count_digits(nth_number));
        } else {
            printf("Error: Nth number not found.\n");
        }
    }

    return 0;
}
