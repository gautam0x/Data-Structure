/*
Code For Insertion Sort Using Array
http//github.com/gautam0x
*/

#include<stdio.h>

void insertionsort(int arr[],int n)
{
 int i, key, j;
 for (i = 1; i < n; i++)
 {
  key = arr[i];
  j = i - 1;
  while (j >= 0 && arr[j] > key)
  {
   arr[j + 1] = arr[j];
   j = j - 1;
  }
  arr[j + 1] = key;
 }
}

int main()
{
 int arr[10],i,n;
 printf("Enter The length Of Array : ");
 scanf("%d",&n);

 printf("\nEnter the elements of Array\n");
 for(i=0;i<n;i++)
 {
  printf("Element [%d] : ",i+1);
  scanf("%d",&arr[i]);
 }

 insertionsort(arr,n);

 printf("\nShorted Elements Of Array : ");
 for(i=0;i<n;i++)
 {
  printf(" %d",arr[i]);
 }

 return 0;
}

