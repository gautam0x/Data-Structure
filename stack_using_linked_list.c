/*
Code For Stack Using Linked List
http//github.com/gautam0x
*/

#include<stdio.h>
#include<stdlib.h>

//creating node structure
struct stack
{
 int data;
 struct stack *next;
};

//initializing top as Global Variable
struct stack *top = NULL;

void push(int data)
{
  struct stack *new_node;
  new_node = (struct stack *)malloc(sizeof(struct stack));
  new_node->data = data;
  if(top == NULL)
  {
   new_node->next = NULL;
   top = new_node;
  }
  else
  {
   new_node->next = top;
   top = new_node;
  }
}

void peep()
{
 if(top == NULL)
 {
  printf("Stack Is Empty");
 }
 else
 {
  printf("The top element of Stack is = %d",top->data);
 }
}

void pop()
{
 struct stack *temp_node;

 if(top == NULL)
 {
  printf("STACK UNDERFLOW\n");
 }
 else
 {
  temp_node = top;
  top = top->next;
  temp_node->next = NULL;
  free(temp_node);
 }

}

void display()
{
 struct stack *ptr;
 ptr = top;
 printf("\n Stack : ");
 while(ptr != NULL)
 {
  printf("%d ",ptr->data);
  ptr=ptr->next;
 }

}

int main()
{
 int data,ch;

 //Getting Choice Input From Users
 do
 {
  printf("\n\n\n### STACK OPERATION USING LINKED LIST ###\nEnter Your Choice:\n 1)PUSH\n 2)POP\n 3)PEEP\n 4)DISPLAY\n 0)BREAK\n  ==> ");
  scanf("%d",&ch);

  switch(ch)
  {
   case 1:
    printf("Enter data to pushed : ");
    scanf("%d",&data);
    push(data);
    break;
   case 2:
    pop();
    break;
   case 3:
    peep();
    break;
   case 4:
    display();
    break;
   default:
    break;
  }
 }while(ch);

 return 0;

}

