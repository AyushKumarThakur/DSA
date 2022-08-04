#include <stdio.h>

void quick_sort(int *, int);
void swap(int*, int*);


int main()
 {
    int n; //size of array
    printf("Size of Array: ");
    scanf("%d", &n);

    int arr[n]; //array elements
    printf("Enter your array: ");

    for(int i = 0; i<n; i++)
        scanf("%d", &arr[i]);
    quick_sort(arr, n);
    printf("Sorted Array: ");

    for(int i = 0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

/* here we check the no of element which is smaller than pivot element then place the pivot element to that index which shows by the no of no is smaller element */

void quick_sort(int*arr, int n)
 {
    int x = 0; // to sift pivot toward left
    while(n-1-x) {
        int small_arr_indx = -1;
        int pivot = arr[n-1-x];
        for(int j = 0; j<n; j++) {
            if(arr[j]<=pivot) {
                small_arr_indx++;
                if(small_arr_indx!=j)
                    swap(&arr[small_arr_indx], &arr[j]);
                if(n-1-x ==small_arr_indx)
                    x++;
            }
        }
    }
}

void swap(int*x, int*y)
 {
    *x = *x^*y;
    *y = *x^*y;
    *x = *x^*y;
}
