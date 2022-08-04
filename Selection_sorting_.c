// working fine

#include <stdio.h>

void selc_sort(int *, int);
void swap(int *, int *);

int ask_acc_dec(void);

int main() {
    int n; //size of array
    printf("Size of Array: ");
    scanf("%d", &n);

    int arr[n]; //array elements
    printf("Enter your array: ");
    for(int i = 0; i<n; i++)
        scanf("%d", &arr[i]);
    selc_sort(arr, n);

    printf("Sorted Array: ");
    for(int i = 0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}


/* selection sort function, sort the array by taking base address of array
work with swap(int *, int *) and ask_acc_dec() function */

void selc_sort(int *arr, int n)
 {
    printf("Enter 1: For accending order sort\n"); // remove this line if ask_acc_dec() function is not using
    printf("Enter 2: For decending order sort\n"); // remove this line if ask_acc_dec() function is not using
        int choice = ask_acc_dec();
    for(int i= 0; i<n; i++)
     {
        int arr_pos= i;
        for(int j = 1+i; j<n; j++) 
        {
            if(arr[i]>arr[j] && arr[arr_pos]>arr[j] && choice == 1)  //  condition for accending sort
                arr_pos = j;
            else if(arr[i]<arr[j] && arr[arr_pos]<arr[j] && choice == 2)  // condition for decending sort
                arr_pos = j;
        }
        if(arr[i]!=arr[arr_pos])
            swap(&arr[i], &arr[arr_pos]);    
    }
}

// swap the value of two value by taking their address 

void swap(int*x, int*y)
{
    *x = *x^*y;
    *y = *x^*y;
    *x = *x^*y;
}

// print statement of choice should write before the choice function run  
int ask_acc_dec()
 {
    int x;
    printf("Enter choice: ");
    scanf("%d", &x);

    switch(x)
     {
        case 1: return x;
        break;
        case 2: return x;
        break;
        default: printf("Invalid Choice\n");

        ask_acc_dec();
    }
}
