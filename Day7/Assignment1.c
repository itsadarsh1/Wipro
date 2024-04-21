//Sorting array using pointer
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int *arr, int size) 
{
    for (int i=0;i<size-1;i++) 
    {
        for (int j=i+1;j<size;j++) 
        {
            if (*(arr+i) > *(arr+j)) 
            {
                swap(arr+i, arr+j);
            }
        }
    }
}

int main() {
    int size;
    printf("Size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:", size);
    for (int i=0;i<size;i++) {
        scanf("%d", &arr[i]);
    }
    sortArray(arr, size);

    printf("Sorted array: ");
    for (int i=0;i<size;i++) {
        printf("%d ", *(arr+i));
    }

    return 0;
}
