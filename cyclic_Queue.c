#include<stdio.h>
#include<stdlib.h>


struct Array_Queue
{
      int front,rear;
      int capacity;
      int *array;
};


struct Array_Queue* createQueue(int cap)
{
      struct Array_Queue *Q;
      Q=(struct Array_Queue*)malloc(sizeof(struct Array_Queue));
      if(!Q)
          return(NULL);
      Q->capacity=cap;
      Q->front=Q->rear=-1;
      Q->array=(int *)malloc(Q->capacity *sizeof(int));
      if(!Q->array)
          return(NULL);
      return(Q);
}


int Display_all_elements (struct Array_Queue *Q)
{
   int i;
   printf("\n");

   if(Q->front==-1)
   {
       printf("Queue is empty.");
       return(1);
   }

   printf("The numbers are:");

   if(Q->front <= Q->rear)
   {
       for(i=Q->front;i<=Q->rear;i++)
   {
          printf("%d ",Q->array[i]);
   }
   return(1);
   }
   else
   {
       for(i=Q->front;i<=Q->capacity;i++)
   {
          printf("%d ",Q->array[i]);
   }
       for(i=0;i<=Q->rear;i++)
   {
          printf("%d ",Q->array[i]);
   }
   return(1);
   }

}


int isFullQueue(struct Array_Queue *Q)

{
      return((Q->rear+1)%Q->capacity==Q->front);
}


int isEmptyQueue(struct Array_Queue *Q)

{

       return(Q->front==-1);
}



int QueueSize(struct Array_Queue *Q)

{
      int x;
      if(Q->front==-1&&Q->rear==-1)
        return(0);
      x=(Q->capacity-Q->front+Q->rear+1)%Q->capacity;
      if(x==0)
        return (Q->capacity);
      return (x);
}


void enQueue(struct Array_Queue *Q, int data)

{
      if(isFullQueue(Q))
           printf("OVER FLOW");
      else
      {
           Q->rear=(Q->rear+1)%Q->capacity;
           Q->array[Q->rear]=data;
           if(Q->front==-1)
               Q->front=Q->rear;
      }
}


int deQueue(struct Array_Queue *Q)

{
      int data=-1;
      if(isEmptyQueue(Q))
      {
           printf("Queue isEmpty");
           return(-1);
      }
      else
      {
           data=Q->array[Q->front];
           if(Q->front==Q->rear)
           {
               printf("%d is deleted which was in the front of the queue.",Q->array[Q->front]);
               Q->front=Q->rear=-1;
           }

           else
           {
               printf("%d is deleted which was in the front of the queue.",Q->array[Q->front]);
               Q->front=(Q->front+1)%Q->capacity;
           }

      }
      return data;
}



void deleteQueue(struct Array_Queue *Q)

{
      int x;
      if(Q)
      {
               if(Q->array)
               {
                   free(Q->array);
               }
               free(Q);
      }
      while(1){
        system("cls");
        printf("\n\nQueue is deleted and now you will not be able to use the same queue.\nIf you want to use the queue again then enter the number for yes,\nor to exit enter the number for no.");
        printf("Press:-\n1. YES\n2. NO\n\n");
        scanf("%d",&x);

        switch(x)
        {
           case 1: main();
                   break;

           case 2: exit(0);
                   break;

           default:printf("Wrong choice\nSelect choice only from the given options.");
                   break;
      }
      getch();
      }



      exit(0);
}




int main()
{
    int option,item,size,m;
    struct Array_Queue *Q;
    printf("Enter no for the size of array:");
    scanf("%d",&m);
    Q=createQueue(m);


    while(1)
    {
        system("cls");
        printf("\n1. Show QueueSize");
        printf("\n2. enQueue");
        printf("\n3. deQueue");
        printf("\n4. See the elements of Queue");
        printf("\n5. deleteQueue");
        printf("\n6. Exit");
        printf("\nEnter your option:");
        scanf("%d",&option);

        switch (option)
        {
        case 1:
            size=QueueSize(Q);
            printf("\nSize of Queue is: %d",size);
            break;

        case 2:
            printf("\nEnter a no:");
            scanf("%d",&item);
            enQueue(Q,item);
            break;

        case 3:
            deQueue(Q);
            break;

        case 4:
            Display_all_elements(Q);
            break;

        case 5:
            deleteQueue(Q);
            break;

        case 6:
            exit(0);

        default:
            printf("Wrong choice\nSelect options only which are given above.");
            break;
        }

        getch();


    }
}





