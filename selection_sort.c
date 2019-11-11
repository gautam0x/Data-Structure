/*
Code For Bubble Sort Using Array
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

//Sorting Algorithm
for (i=0;i<n-1;i++)
{
 int min_index = i;
 for(j=i+1;j<n;j++)
 {
  if(a[j]<a[min_index])
  {
   min_index=j;
  }
 }

 // Swap Data
 temp = a[i];
 a[i] = a[min_index];
 a[min_index] = temp;
}

 //Sorted Array Output
 printf("\nSortd Array \n");
 for(i=0;i<n;i++)
 {
  printf("%d \n",a[i]);
 }

 return 0;
}