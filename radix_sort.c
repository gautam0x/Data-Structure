#include <stdio.h>

int getMax(int array[], int n)
{
  int max = array[0];
  for (int i = 1; i < n; i++)
    if (array[i] > max)
      max = array[i];
  return max;
}
void countingSort(int array[], int size, int place)
{
  int output[size + 1];
  int max = (array[0] / place) % 10;
  for (int i = 1; i < size; i++)
  {
    if (((array[i] / place) % 10) > max)
      max = array[i];
  }
  int count[max + 1];
  for (int i = 0; i < max; ++i)
    count[i] = 0;
  for (int i = 0; i < size; i++)
    count[(array[i] / place) % 10]++;
  for (int i = 1; i < 10; i++)
    count[i] += count[i - 1];
  for (int i = size - 1; i >= 0; i--)
  {
    output[count[(array[i] / place) % 10] - 1] = array[i];
    count[(array[i] / place) % 10]--;
  }
  for (int i = 0; i < size; i++)
    array[i] = output[i];
}
void radixsort(int array[], int size)
{
  int max = getMax(array, size);
  for (int place = 1; max / place > 0; place *= 10)
    countingSort(array, size, place);
}
void printArray(int array[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    printf("%d  ", array[i]);
  }
  printf("\n");
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

 radixsort(arr,n);

 printf("\nShorted Elements Of Array : ");
 for(i=0;i<n;i++)
 {
  printf(" %d",arr[i]);
 }

 return 0;
}