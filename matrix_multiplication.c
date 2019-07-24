/*
Code For 2D Matrix Multiplication of Same Dimension
http//github.com/gautam0x
*/

#include<stdio.h>

int main()
{
 int i,j,k,m,n,a[10][10],b[10][10],c[10][10];

 printf("Enter Size Of Matrix M N: ");
 scanf("%d %d",&m,&n);

 //Input
 printf("\nEnter Elements Of Matrix (A) \n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d row %d column Element : ",i+1,j+1);
   scanf("%d",&a[i][j]);
  }
 }

 //Output
 printf("\nOutput Matrix (A) \n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d ",a[i][j]);
  }
  printf("\n");
 }

 //Input
 printf("\nEnter Elements Of Matrix (B)\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d row %d column Element : ",i+1,j+1);
   scanf("%d",&b[i][j]);
  }
 }

 //Output
 printf("\nOutput Matrix (B) \n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d ",b[i][j]);
  }
  printf("\n");
 }

 //Multiply
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   c[i][j] = 0;
   for(k=0;k<n;k++)
   {
    c[i][j] = c[i][j]+a[i][k]*b[k][j];
   }
  }
 }

 //Output
 printf("\nOutput Matrix (C) \n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d ",c[i][j]);
  }
  printf("\n");
 }

 return 0;

}
