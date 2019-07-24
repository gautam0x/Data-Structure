/*
Code For Bubble Short Using Array
http//github.com/gautam0x
*/

#include<stdio.h>

int main()
{
 int i,j,n,a[10],temp;

 printf("Enter Size Of Array : ");
 scanf("%d",&n);

 //Input
 printf("\nEnter Elements Of Array \n");
 for(i=0;i<n;i++)
 {
  printf("%d Element : ",i+1);
  scanf("%d",&a[i]);
 }

 //Output
 printf("\nOutput Array \n");
 for(int i=0;i<n;i++)
 {
  printf("%d \n",a[i]);
 }

 //shorting Process
 for(i=0;i<n;i++)
 {
  for(j=0;j<n-i-1;j++)
  {
   if(a[j]>a[j+1])
   {
    temp = a[j];
    a[j] = a[j+1];
    a[j+1] = temp;
   }
  }
 }

 //Shorted Array Output
 printf("\nShortd Array \n");
 for(int i=0;i<n;i++)
 {
  printf("%d \n",a[i]);
 }

 return 0;

}