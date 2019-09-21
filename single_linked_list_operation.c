/*
Code For Diffrent Operation Of Single Linked List
http//github.com/gautam0x
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

/*
Here We Are Going To Define Various Function For
Insert/Delete Node From Any Position Of The Linked List
*/
void insert_at_head();
void insert_at_tail();
void insert_at_position();
void delete_from_head();
void delete_from_tail();
void delete_from_position();
void display();

int main()
{
    int choice;

    // Get The Choice From Users
    do
    {
        printf("\n\n=== Operation On Linked List (Select Option) ===\n 1)Insert Node At Start\n 2)Insert Node At End\n 3)Insert Node At Position\n 4)Delete First Node\n 5)Delete Last Node\n 6)Delete NOde From Position\n 7)Display\n 8)Exit\n Enter Your Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                insert_at_head();
                break;
            case 2:
                insert_at_tail();
                break;
            case 3:
                insert_at_position();
                break;
            case 4:
                delete_from_head();
                break;
            case 5:
                delete_from_tail();
                break;
            case 6:
                delete_from_position();
                break;
            case 7:
                display();
                break;
            case 8:
                break;
            default:
                printf("\n-->Please Select Correct Option");
                break;

        }
    } while (choice!=8);
}

void insert_at_head()
{
    int data;
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));

    printf("Enter Data To Be Inserted : ");
    scanf("%d",&data);
    new_node->data = data;

    if(head==NULL)
    {
        head = new_node;
        head->next = NULL;
    }
    else
    {
        new_node->next = head;
        head = new_node;
    }   
}
void insert_at_tail()
{
    int data;
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));

    printf("Enter Data To Be Inserted : ");
    scanf("%d",&data);
    new_node->data = data;

    if(head==NULL)
    {
        head = new_node;
        head->next = NULL;
    }
    else
    {
        struct node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr=ptr->next;
        }
        new_node->next = NULL;
        ptr->next = new_node;
    }
}
void insert_at_position()
{
    int data,pos,i;
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));

    printf("Enter Data To Be Inserted : ");
    scanf("%d",&data);
    printf("Enter Position Where Data Is To Be Inserted : ");
    scanf("%d",&pos);
    new_node->data = data;

    if(head==NULL)
    {
        printf("\n--> Linked List Is Empty");
        return;
    }
    else
    {
        struct node *ptr = head;
        i=2; // i initialize with 2 beacuse we ignore to insert head node
        while (ptr->next != NULL && i<pos)
        {
            ptr=ptr->next;
            i++;
        }
        new_node->next = ptr->next;
        ptr->next = new_node;
    }
}
void delete_from_head()
{
    if(head==NULL)
    {
        printf("\n-->Linked List Has No Elements");
        return;
    }
    else
    {
        struct node *temp;
        temp = head;
        head = head->next;
        printf("\n--> %d Has Been Deleted",temp->data);
        free(temp);
    }
}
void delete_from_tail()
{
    if(head==NULL)
    {
        printf("\n-->Linked List Has No Elements");
        return;
    }
    else
    {
        struct node *ptr;
        struct node *temp;
        ptr = head;
        while (ptr->next->next != NULL)
        {
            ptr=ptr->next;
        }
        temp = ptr->next;
        ptr->next = NULL;
        printf("\n--> %d Has Been Deleted",temp->data);
        free(temp);
    }
}
void delete_from_position()
{
    int pos,i;
    
    printf("Enter Position Where Data Is To Be Deleted : ");
    scanf("%d",&pos);
    
    if(head==NULL)
    {
        printf("\n-->Linked List Has No Elements");
        return;
    }
    else
    {
        struct node *temp;
        struct node *ptr;
        ptr = head;
        i=2; //we inore head element here
        while (ptr->next != NULL && i<pos)
        {
            ptr=ptr->next;
            i++;
        }
        temp = ptr->next;
        ptr->next = ptr->next->next;
        printf("\n--> %d Has Been Deleted",temp->data);
        free(temp);
    }
}
void display()
{
    struct node *ptr;
    ptr = head;
    if(head==NULL)
    {
        printf("\n-->Linked List Has No Elements");
    }

    printf("\n-->LElements Of Linked List : ");
    while(ptr != NULL)
    {
        printf(" %d",ptr->data);
        ptr=ptr->next;
    }
}