/* Find a partition point in array

Given an unsorted array of integers. Find an element such that all the elements to its left are smaller and to its right are greater. Print -1 if no such element exists.

Note that there can be more than one such elements. For example an array which is sorted in increasing order all elements follow the property. We need to find only one such element.

Examples :

Input :  A[] = {4, 3, 2, 5, 8, 6, 7}  
Output : 5

Input : A[] = {5, 6, 2, 8, 10, 9, 8}
Output : -1 */

#include <stdio.h>

int find_partition_point(int arr[], int n) 
{
    for (int i=1;i<n-1;i++) 
    {
        int j;
        for (j=0;j<i;j++) 
        {
            if (arr[j] >= arr[i])
                break;
        }
        if (j==i) 
        {
            for (j=i+1;j<n;j++) 
            {
                if (arr[j] <= arr[i])
                    break;
            }
            if (j==n)
                return arr[i];
        }
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

    int partition_point = find_partition_point(arr, n);
    if (partition_point != -1) 
    {
        printf("Output: %d\n", partition_point);
    } else 
    {
        printf(" Output: -1 ");
    }

    return 0;
}
