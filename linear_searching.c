#include <stdio.h>

int main()
{
    int array[50], search,z, n;

    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    printf("Enter %d integer(s)\n", n);

       for (z = 0; z< n; z++)
          scanf("%d", &array[z]);

       printf("Enter the number to be search\n");
          scanf("%d", &search);

       for (z = 0; z < n; z++) 
       {
           if (array[z] == search)    /* If required element is found */
       {
       printf("%d is present at location %d.\n", search, z+1);
       break;
    }
  }
           if (z == n) 

       printf("%d isn't present in the array.\n", search);

       return 0;
}