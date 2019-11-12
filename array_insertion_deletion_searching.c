/*
Code For Insertion Deletion and Searching using Array
http//github.com/gautam0x
*/

#include<stdio.h>

int main()
{
 int i,n,a[10],v,p; 
 int flag = 0;

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


 //Insertion
 printf("\nEnter New Value And Its Position : ");
 scanf("%d %d",&v,&p);
 p=p-1;

 for(i=n-1;i>=p;i--)
 {
  a[i+1] = a[i];
 }

 a[p] = v;
 n++;

 //Output
 printf("\nOutput Array \n");
 for(int i=0;i<n;i++)
 {
  printf("%d \n",a[i]);
 }


 //Deletion
 printf("\nEnter Position to delete ");
 scanf("%d",&p);
 p=p-1;

 for(i=p;i<n;i++)
 {
  a[i] = a[i+1];
 }

 n--;

 //Output
 printf("\nOutput Array \n");
 for(int i=0;i<n;i++)
 {
  printf("%d \n",a[i]);
 }

 
 //Searchig
 printf("\nEnter A Data to be Searched : ");
 scanf("%d",&v);

 for(i=0;i<n;i++)
 {
  if(a[i] == v)
  {
      printf("\nData has been founded at index %d\n",i+1);
      flag=1;
      break;
  }
 }
 // Show Unmatched Condition
 if(flag != 1)
 {
     printf("\nEntered Data Doesn't Matched With any Element\n");
 }


 return 0;
}
