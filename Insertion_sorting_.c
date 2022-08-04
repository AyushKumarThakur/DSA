// working fine

#include <stdio.h>

void ins_sort(int *,int);
void swap(int*, int*);

int ask_acc_dec(void);

int main() 
{
    int n; //size of array
    printf("Size of Array: ");
    scanf("%d", &n);

    int arr[n]; //array elements
    printf("Enter your array: ");

    for(int i = 0; i<n; i++)
        scanf("%d", &arr[i]);
    ins_sort(arr, n);
    printf("Sorted Array: ");

    for(int i = 0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

/* insertion sort function, sort the array by taking base address of array
work with swap(int *, int *) and ask_acc_dec() function */

void ins_sort(int *arr, int n)
 {
    printf("Enter 1: For accending order sort\n"); // remove this line if ask_acc_dec() function is not using
    printf("Enter 2: For decending order sort\n"); // remove this line if ask_acc_dec() function is not using
    
    int choice = ask_acc_dec();
    for(int i = 0; i<n; i++) 
    {
        for(int j = 1+i; j<n; j++) {
            if(arr[i]>arr[j] && choice ==1) // condition for accending swap
                swap(&arr[i], &arr[j]);
            else if(arr[i]<arr[j] && choice ==2)  // condition for decending swap
                swap(&arr[i], &arr[j]);
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

/* ask the choice to be entered and return the entered choice
can be modified for with multiple case 
print statement of choice should write before the choice function run  */
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
