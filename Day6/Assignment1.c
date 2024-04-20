/* Q1. rotate array every kth element

i/p
1 2 3 4 5 6 7 8 9
k= 3
o/p
3 2 1 6 5 4 9 8 7

i/p
1 2 3 4 5 6 7 8 9
k= 4
o/p
4 3 2 1 8 7 6 5 9  */

#include <stdio.h>

int main() 
{
    int n, k, i;
    
    printf("Enter the size of the Array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d",&k);

    for (i=0;i<n;i=i+k) 
    {
        int left=i;
        int right;
        if (i+k-1<n) 
        {
            right = i+k-1;
        } 
        else 
        {
            right = n-1;
}

        while (left<right) 
        {
            int temp = arr[left];
            arr[left++] = arr[right];
            arr[right--] = temp;
        }
    }
    
    printf("Output Array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
