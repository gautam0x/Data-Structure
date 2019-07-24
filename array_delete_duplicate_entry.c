/*
Code For Delete Duplicate Entry From Array
http//github.com/gautam0x
*/

#include<stdio.h>

int main()
{
 int i,j,k,n,a[10];

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

 //Duplicate Deleting
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n; )
  {
   if(a[i]==a[j])
   {
    for(k=j;k<n;k++)
    {
     a[k] = a[k+1];
    }
    n--;
   }
   else
   {
    j++;
   }
  }
 }

 //Output After Operation
 printf("\nOutput Array Without Duplicate\n");
 for(int i=0;i<n;i++)
 {
  printf("%d \n",a[i]);
 }

 return 0;

}
