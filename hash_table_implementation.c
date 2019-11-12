#include<stdio.h>

#define size 7

int arr[size];


void initialize()
{   
    int i;
    for(i = 0; i < size; i++)
        arr[i] = -1;
}

void insert(int value)
{   
    int key = value % size;
    
    if(arr[key] == -1)
    {   
        arr[key] = value;
        printf("%d inserted at arr[%d]\n", value,key);
    }
    else
    {   
        printf("Collision : arr[%d] has element %d already!\n",key,arr[key]);
        printf("Unable to insert %d\n",value);
    }
}

void del(int value)
{
    int key = value % size;
    if(arr[key] == value)
        arr[key] = -1;
    else
        printf("%d not present in the hash table\n",value);
}

void search(int value)
{
    int key = value % size;
    if(arr[key] == value)
        printf("Search Found at index %d\n",key);
    else
        printf("Search Not Found\n");
}

void print()
{
    int i;
    for(i = 0; i < size; i++)
        printf("arr[%d] = %d\n",i,arr[i]);
}

int main()
{
    int ch,data;
    initialize();
    //Loop For Taking User's Choice
    do
    {
        printf("\n\n\n### HASH TABLE Implementation ###\nEnter Your Choice:\n 1)Insert\n 2)Delete\n 3)Search\n 4)Print\n 0)BREAK\n  ==> ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter Data To Insert : ");
                scanf("%d",&data);
                insert(data);
                break;
            case 2:
                printf("Enter Data To Delete : ");
                scanf("%d",&data);
                del(data);
                break;
            case 3:
                printf("Enter Data To Search : ");
                scanf("%d",&data);
                search(data);
                break;
            case 4:
                print();
            default:
                break;
        }
    }while(ch);

    return 0;
}