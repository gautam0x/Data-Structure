/*
Code For Stack Using Array
http//github.com/gautam0x
*/

#include<stdio.h>

// initialize top as empty
int top=-1;

void push(int stack[],int size)
{
 int data;
 if(top == size-1)
 {
  printf("Stack is Overflow");
 }
 else
 {
  printf("Enter value To Push : ");
  scanf("%d",&data);
  top++;
  stack[top]=data;
 }
}


void pop(int stack[])
{
 if(top == -1)
 {
  printf("Stack is underflow\n");
 }
 else
 {
  printf("The last element is going to be poped is %d \n",stack[top]);
  top--;
 }
}

void display(int stack[])
{
 printf("Values Inside A Stack Is : ");
 for(int i=0;i<=top;i++)
  printf("%d ",stack[i]);
}

void peep(int stack[])
{
 if(top == -1)
 {
  printf("Stack is Empty\n");
 }
 else
 {
   printf("Stack last Element is :%d \n",stack[top]);
 }
}

int main()
{
 int stack[10],size;
 int ch;

 //Get Stack Size Input From User
 printf("Enter the size of stack : ");
 scanf("%d",&size);

 //Loop For Taking User's Choice
 do
 {
  printf("\n\n\n### STACK OPERATION ###\nEnter Your Choice:\n 1)PUSH\n 2)POP\n 3)PEEP\n 4)DISPLAY\n 0)BREAK\n  ==> ");
  scanf("%d",&ch);

  switch(ch)
  {
   case 1:
    push(stack,size);
    break;
   case 2:
    pop(stack);
    break;
   case 3:
    peep(stack);
    break;
   case 4:
    display(stack);
   default:
    break;
  }
 }while(ch);

 return 0;
}


