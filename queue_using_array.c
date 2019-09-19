/*
Code For Queue Using Array
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
    if(rear == QSIZE-1)
    {
        printf("\n-->Queue Is Overlow");
    }
    else
    {
        if (front == -1)
        {
            front=0;
        }

        printf("\nEnter Data To Be Inserted : ");
        scanf("%d",&data);
        rear++;
        queue[rear]=data;
    }
}

void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("\n-->Queue Is Underflow");
    }
    else
    {
        printf("\n-->Deleted Element : %d",queue[front]);
        front++;
    }
}

void display()
{
    if(front==-1 || front>rear)
    {
        printf("\n-->Queue Is Underflow");
    }
    else
    {
        printf("\n-->Elements Of Queue : ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ",queue[i]);
        }
    }
}
