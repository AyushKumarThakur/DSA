//  C Program to do a Queue using an Array

#include <stdio.h>
#include<stdlib.h>

#define MAX 60

void insert();
void delete();
void display();

int queue_array[MAX];
int rear = - 1;
int front = - 1;
 int main()
{

    int choice;

    while (1)
    {
        printf("1.Insert element in a queue \n");
        printf("2.Delete element from a queue \n");
        printf("3.Display all elements of  a queue \n");
        printf("4.exit \n");
        printf("Enter a choice : ");

        scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            insert();
        break;

        case 2:
            delete();
        break;

        case 3:
        display();
        break;

        case 4:
        exit(1);

        default:
        printf("No choice \n");

} 
} 
} 

void insert()

{
    int add_number;

    if (rear == MAX - 1)
        printf("Queue Overflow \n");
    else
    {
    if (front == - 1)

    // If queue is  empty at start 
    front = 0;
    printf("Insert the element in queue : ");
    scanf("%d", &add_number);

    rear = rear + 1;
    queue_array[rear] = add_number;
}

}
// end of insert

void delete()
{
if (front == - 1 || front > rear)
{
    printf("Queue Underflow \n");
    return ;

}
else
    {
    printf("Element deleted from queue is : %d\n", queue_array[front]);
    front = front + 1;
    }

} 
//  end of delete

void display()
{
    int i;
    if (front == - 1)

        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");

    for (i = front; i <= rear; i++)
        printf("%d ", queue_array[i]);
        printf("\n");
    }
} 