#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int num;                 
    struct node *nextptr;          
 
}*stnode;

void create_Node_List(int n); 
void display_List();         


int main()
{
    int n;

		printf("\n\n Linked List : To create and display Singly Linked List :\n");
		printf("-------------------------------------------------------------\n");
		
        printf(" Input the number of nodes : ");
            scanf("%d", &n);
        create_Node_List(n);
        printf("\n Data entered in the list : \n");
            display_List();
    return 0;
}
void create_Node_List(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
        stnode = (struct node *)malloc(sizeof(struct node));

    if(stnode == NULL) 
    {
        printf(" Memory can not be allocated.");
    }
    else
    {

        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode->num = num;      
        stnode->nextptr = NULL; // links the address field to NULL
        tmp = stnode;

        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
 
                fnNode->num = num;      // links the num field of fnNode with num
                fnNode->nextptr = NULL; 
 
                tmp->nextptr = fnNode;
                tmp = tmp->nextptr; 
            }
        }
    }
}
void display_List()
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)

        {
            printf(" Data = %d\n", tmp->num);       
            tmp = tmp->nextptr;                    
        }
    }
} 
