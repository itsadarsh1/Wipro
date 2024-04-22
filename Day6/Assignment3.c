/* Given an array A of N positive numbers. The task is to find the position
where equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of   elements after it.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements
of the array.
Constraints
1<= n<=100
1<=arr<= 1000, where arr is the ith element of the array.

Output Format:
The output line contains integer denoting an equilibrium
index (if any) or -1 (if no equilibrium indexes exist).

Input:
[-7, 1, 5, 2, -4, 3, 0]
3

[-7, 0, 0, 0, -4, 4, 0]
0

[0 0 0 0 -1]
4
*/

#include <stdio.h>

int find_equilibrium_position(int arr[], int n) 
{
    int total_sum = 0;
    for (int i=0;i<n;i++) 
    {
        total_sum=total_sum+arr[i];
    }
    
    int left_sum = 0;
    for (int i=0;i<n;i++) 
    {
        total_sum=total_sum-arr[i];
        if (left_sum==total_sum) 
        {
            return i;
        }
        left_sum=left_sum+arr[i];
    }
    
    return -1;
}

int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements of the array: ", n);
    for (int i=0;i<n;i++) 
    {
        scanf("%d", &arr[i]);
    }
    int equilibrium_position = find_equilibrium_position(arr, n);
    if (equilibrium_position != -1) 
    {
        printf("%d\n", equilibrium_position);
    } else {
        printf("-1\n");
    }

    return 0;
}
