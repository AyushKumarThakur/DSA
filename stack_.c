#include <stdio.h>
#include <stdlib.h>

#define MAX 8

int array_stack[MAX];
int top = -1;
int peek();
int isEmpty();
int isFull();

void push();
int pop();
void display();

int main() 
{
    int option, item;
    while(1) {
        system("cls");
        printf("\n-----------------------------\n");
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Display the top element\n");
        printf("4. Display all stack element\n");
        printf("5. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                printf("Enter the item to be pushed: ");
                scanf("%d", &item);
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                printf("\n>-----------------------------<\n\n");
                display();
                printf("\n>-----------------------------<\n");
                break;
            case 5:
                exit(1);
                break;
            default:
                printf("Wrong Choice\n");
        }
        getch();

    }
}

void push(int item) 
{
    if(isFull()){
        printf(" Stack Overflow\n");
        return;
    }
    top++;
    array_stack[top] = item;
    printf(" item pushed into stack\n");
}

int pop() 
{
    if(isEmpty())
        printf("Stack Underflow\n");
    else {
        printf("\n>-----------------------------<\n\n");
        printf(" Popped item is %d\n", array_stack[top]);
        printf("\n>-----------------------------<\n");
        top--;
    }
}

int peek()
 {
    if(isEmpty()){
        printf(" Stack Underflow\n");
    }
    else {
        printf("\n>-----------------------------<\n\n");
        printf("Item at the top is: %d\n", array_stack[top]);
        printf("\n>-----------------------------<\n");
    }
}

void display() 
{
    if(isEmpty())
        printf(" Stack Underflow\n");
    else {
        printf("TOP---->\n");
        printf("Stack element are: ");
        for(int i = 0 ; i<=top; i++)
            printf("%d ", array_stack[i]);
        printf("\n");
    }
}

int isFull() 
{
    if(top == MAX-1)
        return 1;
    else
        return 0;
}

int isEmpty()
 {
    if(top == -1)
        return 1;
    else
        return 0;
}
