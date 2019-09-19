/*
Code For Queue Using Linked List
http//github.com/gautam0x
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front;
struct node *rear;


void enqueue();
void dequeue();
void display();

int main()
{
    int choice;

    do
    {
        printf("\n\n====Queue Operation Using linked List====\n 1)Insert\n 2)Delete\n 3)Display\n 4)Exit\n Enter Your Choice : ");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                break;                
            default:
                printf("\n---> Wrong Choice Input");
                break;
        }

    } while(choice!=4);

    return 0;
}

void enqueue()
{
    int data;
    struct node *new_node;
    new_node = (struct node *) malloc(sizeof(struct node));

    if(new_node == NULL)
    {
        printf("\n--> Queue Is Overflow");
        return;
    }

    printf("\n--> Enter The Data To Insert To Queue : ");
    scanf("%d",&data);
    new_node-> data = data;

    if(front==NULL)
    {
        front = new_node;
        rear = new_node;
        front-> next = rear-> next = NULL;
    }
    else
    {
        rear-> next = new_node;
        rear = new_node;
        rear-> next=NULL;
    }
}
void dequeue()
{
    struct node *temp;

    if (front==NULL)
    {
        printf("\n--> Queue Is Underflow");
        return;
    }
    else
    {
        temp = front;
        front = front-> next;
        printf("\n--> Deleted Element : %d",temp-> data);
        free(temp);
    }
}
void display()
{
    if (front==NULL)
    {
        printf("\n--> Queue Is Underflow");
        return;
    }
    else
    {
        struct node *ptr;
        ptr = front;
        printf("\n--> Elements Of Queue : ");
        while (ptr!=NULL)
        {
         printf(" %d",ptr-> data);
         ptr=ptr-> next;
        }
        
    }   
}