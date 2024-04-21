/* Problem Statement:
Given an unsorted array a of size N of non-negative integers,
find a continuous sub-array which adds to a given number sum.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements
of the array.
The last line contains an integer, denoting the sum.

Constraints
1<= n<=100
1<=arr<= 1000, where arr is the ith element of the array.
1<= n<=100000

Output Format:
The output line contains integers denoting the indexes.

TESTCASE 1:
Input:
7
[1, 4, 0, 0, 3, 10, 5]

sum = 7
Output:
Sum found between indexes 1 and 4

TESTCASE 2:
Input:
2
[1, 4]
sum = 0
Output:
No subarray found */
#include <stdio.h>

void findSubarray(int arr[], int n, int sum) 
{
    int current_sum = arr[0];
    int start = 0;
    int i;

    for (i=1;i<=n;i++) {
        while (current_sum>sum && start<i-1) 
        {
            current_sum -= arr[start];
            start++;
        }
        if (current_sum==sum) 
        {
            printf("Sum found between indexes %d and %d\n", start, i - 1);
            return;
        }
        if (i<n) 
        {
            current_sum=current_sum+arr[i];
        }
    }
    printf("No subarray found\n");
}

int main() {
    int n, i, sum;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for (i=0;i<n;i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the sum: ");
    scanf("%d", &sum);

    findSubarray(arr, n, sum);

    return 0;
}
