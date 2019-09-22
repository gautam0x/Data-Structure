/*
Code For Circular Queue Using Array
http//github.com/gautam0x
*/

#include<stdio.h>
#define QSIZE 10

void enqueue();
void dequeue();
void display();

int queue[QSIZE], front=-1, rear=-1, data;

int main()
{
    int choice;

    do
    {
        printf("\n\n====Queue Operation Using Array====\n 1)Insert\n 2)Delete\n 3)Display\n 4)Exit\n Enter Your Choice : ");
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
                printf("\n--->Wrong Choice Input\n");
                break;
        }

    } while(choice!=4);

return 0;
}

void enqueue()
{
    if((front == 0 && rear == QSIZE-1) || (front == rear+1))
	{
		printf("\n-->Queue Overflow \n");
		return;
	}
    if (front == -1)
    {
        front=0;
        rear=0;
    }
    else
    {
        if (rear == QSIZE-1)
            rear=0;
        else
            rear=rear+1;
    }
    printf("\nEnter Data To Be Inserted : ");
    scanf("%d",&data);
    queue[rear]=data;
}

void dequeue()
{
    if(front==-1)
    {
        printf("\n-->Queue Is Underflow");
        return;
    }
    
    printf("\n-->Deleted Element : %d",queue[front]);
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        if(front==QSIZE-1)
            front=0;
        else
            front++;
    }
}

void display()
{
    if(front==-1)
    {
        printf("\n-->Queue Is Underflow");
        return;
    }
    //Print The Circular Queue According to condition
    int i;
    printf("\n-->Elements Of Queue : ");
    if(front <= rear)
    {
        for (i = front; i <= rear; i++)
        {
            printf(" %d",queue[i]);
        }
    }
    else
    {
        for (i = front; i <= QSIZE-1 ; i++)
        {
            printf(" %d ",queue[i]);
        }
        for ( i=0; i<=rear; i++)
        {
            printf(" %d ",queue[i]);
        }
    }
}