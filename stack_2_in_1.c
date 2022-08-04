// WAP to implement two stack in one array

#include <stdio.h>
#include <stdlib.h>

#define MAX 7

int array_stack[MAX];
int top1 = -1, top2 = MAX;

void push_stack1(item);
void push_stack2(item);

int pop_stack1();
int pop_stack2();


int main()
{
    int option, item;
    while (1)
    {
        system("cls");
        printf("\n-----------------------------\n");
        printf("\n1. Push in stack 1\n");
        printf("2. Push in stack 2\n");
        printf("3. Pop from stack 1\n");
        printf("4. Pop from stack 2\n");
        printf("5. Display the top element of stack 1\n");
        printf("6. Display the top element of stack 2\n");
        printf("7. Display all stack element of stack 1\n");
        printf("8. Display all stack element of stack 2\n");
        printf("9. Display both Stacks\n");
        printf("10. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        switch (option){

        case 1:
            printf("Enter the item to be pushed in stack 1: ");
            scanf("%d", &item);
            push_stack1(item);
            break;
        case 2:
            printf("Enter the item to be pushed in stack 2: ");
            scanf("%d", &item);
            push_stack2(item);
            break;
        case 3:
            pop_stack1();
            break;
        case 4:
            pop_stack2();
            break;
        case 5:
            peek_stack1();
            break;
        case 6:
            peek_stack2();
            break;
        case 7:
            display_stack1();
            break;
        case 8:
            display_stack2();
            break;
        case 9:
            display_stack1();
            display_stack2();
            break;
        case 10:
            exit(1);
        default:
            printf("Wrong Choice\n");
        }
        getch();
    }
}

void push_stack1(int item)
 {
    if(isFull_stack1()){
        printf("Stack 1 Overflow\n");
        return;
    }
    top1++;
    array_stack[top1] = item;
    printf("item pushed into stack 1\n");
}

void push_stack2(int item)
 {
    if(isFull_stack2()){
        printf("Stack 2 Overflow\n");
        return;
    }
    top2--;
    array_stack[top2] = item;
    printf("item pushed into stack 2\n");
}

int pop_stack1()
 {
    if(isEmpty_stack1())
        printf("Stack 1 Underflow\n");
    else {
        printf("Popped item is %d from stack 1\n", array_stack[top1]);
        top1--;
        return top1+1;
    }
}

int pop_stack2()
 {
    if(isEmpty_stack2())
        printf("Stack 2 Underflow\n");
    else {
        printf("Popped item is %d from stack 2\n", array_stack[top2]);
        top2++;
        return top2-1;
    }
}

int peek_stack1() 
{
    if(isEmpty_stack1()){
        printf("Stack 1 Underflow\n");
    }
    else {
        printf("Item at the top is: %d\n", array_stack[top1]);
    }
}

int peek_stack2() 
{
    if(isEmpty_stack2()){
        printf("Stack 2 Underflow\n");
    }
    else {
        printf("Item at the top is: %d\n", array_stack[top2]);
    }
}

void display_stack1()
 {
    if(isEmpty_stack1())
        printf("Stack 1 Underflow\n");
    else {
        printf("TOP---->\n");
        printf("Stack 1 element are: ");
        for(int i = 0 ; i<=top1; i++)
            printf("%d ", array_stack[i]);
        printf("\n");
    }
}

void display_stack2() 
{
    if(isEmpty_stack2())
        printf("Stack 2 Underflow\n");
    else {
        printf("TOP---->\n");
        printf("Stack 2 element are: ");
        for(int i = MAX-1 ; i>=top2; i--)
            printf("%d ", array_stack[i]);
        printf("\n");
    }
}

int isFull_stack1()
 {
    if(top1 == top2 - 1)
        return 1;
    else
        return 0;
}

int isFull_stack2()
 {
    if(top1 == top2 - 1)
        return 1;
    else
        return 0;
}

int isEmpty_stack1()
 {
    if(top1 == -1)
        return 1;
    else
        return 0;
}

int isEmpty_stack2()
 {
    if(top2 == MAX)
        return 1;
    else
        return 0;
}
