
#include <stdio.h>

void merge_sort(int *, int, int);
void swap(int *, int*);

int main()
{
    int n; 
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter Array: ");

    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    merge_sort(arr, 0, n-1);
    printf("Sorted Array: ");

    for(int i = 0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


void merge_sort(int *arr, int first, int last)
 {
    int mid = first/2 + last/2;

    if (first != last) 
    {
        merge_sort(arr, first, mid);
        merge_sort(arr, mid+1, last);
    }
    for (int i = 0; i<=mid; i++)
     {
        for(int j = mid+1 ; j<=last; j++)
         {
            if(arr[j]<arr[i] && j != i)
             {
                swap(&arr[j], &arr[i]);
            }
        }
    }
}


// swap the value of two value by taking their address  
void swap(int*x, int*y)
{
    *x = *x^*y;
    *y = *x^*y;
    *x = *x^*y;
}