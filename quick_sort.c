/*
Code For Quick Sort Using Array
http//github.com/gautam0x
*/

#include<stdio.h>

int partition(int a[],int p,int r)
{
 int x,i,j,temp;
 x=a[r];
 i=p-1;

 for(j=p;j<r;j++)
 {
  if(a[j]<=x)
  {
   i++;
   temp= a[i];
   a[i]=a[j];
   a[j]=temp;
  }
 }
 temp= a[i+1];
 a[i+1]=a[r];
 a[r]=temp;

 return i+1;
}

void quickshort(int a[],int p,int r)
{
 int q;
 if(p<r)
 {
  int q = partition(a,p,r);
  quickshort(a,p,q-1);
  quickshort(a,q+1,r);
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

 quickshort(arr,0,n);

 printf("\nShorted Elements Of Array : ");
 for(i=0;i<n;i++)
 {
  printf(" %d",arr[i]);
 }

 return 0;

}
