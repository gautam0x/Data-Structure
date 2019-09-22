/*
Code For Diffrent Operation Of Single Linked List 
It Is similer to Single linked List But Diffrent Linking Behaviour Of Node
http//github.com/gautam0x
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
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
void display_reverse();

int main()
{
    int choice;

    // Get The Choice From Users
    do
    {
        printf("\n\n=== Operation On Linked List (Select Option) ===\n 1)Insert Node At Start\n 2)Insert Node At End\n 3)Insert Node At Position\n 4)Delete First Node\n 5)Delete Last Node\n 6)Delete NOde From Position\n 7)Display\n 8)Display Reverse List\n 9)Exit\n Enter Your Choice : ");
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
                display_reverse();
                break;
            case 9:
                break;
            default:
                printf("\n-->Please Select Correct Option");
                break;

        }
    } while (choice!=9);
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
        head->prev = NULL;
    }
    else
    {
        new_node->next = head;
        new_node->prev = NULL;
        head->prev = new_node;
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
        head->prev = NULL;
    }
    else
    {
        struct node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr=ptr->next;
        }
        new_node->next = NULL;
        new_node->prev = ptr;
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
        free(new_node); // to clear newly assigned memory
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
        new_node->prev = ptr;
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
        head->prev = NULL;
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
        ptr->next->next->prev = ptr;
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
        return;
    }

    printf("\n-->LElements Of Linked List : ");
    while(ptr != NULL)
    {
        printf(" %d",ptr->data);
        ptr=ptr->next;
    }
}
void display_reverse()
{
    struct node *ptr;
    ptr = head;
    if(head==NULL)
    {
        printf("\n-->Linked List Has No Elements");
        return;
    }

    //Set Pointer to Tail Of Linked List
    while(ptr->next != NULL)
    {
        ptr=ptr->next;
    }

    printf("\n-->Reverse Display Of Elements Of Linked List : ");
    while(ptr != NULL)
    {
        printf(" %d",ptr->data);
        ptr=ptr->prev;
    }
}