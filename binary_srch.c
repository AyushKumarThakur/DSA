#include<stdio.h>
void binary_search(int [],int,int);

int main()
{
    int p,j;
    printf("Enter no of the array:");
    scanf("%d",&p);

    int A[p];
    printf("\nEnter the numbers:");
    for(j=0;j<p;j++){
        scanf("%d",&A[j]);
    }

    int item;
    printf("Enter number to find in this array:");
    scanf("%d",&item);
    binary_search(A,p,item);
}

void binary_search(int L[],int N,int item)
{
     int l=0,u=N-1,z;

     while(l<=u){
         z=(l+u)/2;
         if(item==L[z]){

             printf("Search successful at index %d,ITEM FOUND",z);
             return;
             }
             else if(item>L[z])
                 l=z+1;
            else
                 u=z-1;
         }
         printf("\nSearch is unsuccessful");
     }
