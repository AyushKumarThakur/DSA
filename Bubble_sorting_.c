#include <stdio.h>

void bubble_sort(int *, int);
void swap(int*, int*);

int check(int*arr, int);
int swap_count = 0;

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

    bubble_sort(arr, n);
    printf("Sorted Array: ");
    
    for(int i = 0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("No of Swaps: %d\n", swap_count);
    return 0;
}


void bubble_sort(int*arr, int n) 
{
    while(check(arr, n)) {
        for(int i= 0; i<n-1; i++) {
            if(arr[i]> arr[i+1] && arr[i]!= arr[i+1]) {
                swap(&arr[i], &arr[i+1]);
            }
        }
    }
}

int check(int*arr, int n) 
{
    for(int i = 0; i<n-1; i++)
        if(arr[i]>arr[i+1])
            return 1;
        return 0;
}

// swap the value of two value by taking their address  
void swap(int*x, int*y)
{
    swap_count++;
    *x = *x^*y;
    *y = *x^*y;
    *x = *x^*y;
}