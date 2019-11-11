#include<stdio.h>

void heapify(int arr[], int n, int i)
{
   // Find largest among root, left child and right child
   int largest = i;
   int l = 2*i + 1;
   int r = 2*i + 2;
   int temp;
   if (l < n && arr[l] > arr[largest])
     largest = l;
   if (r < n && arr[r] > arr[largest])
     largest = r;
   // Swap and continue heapifying if root is not largest
   if (largest != i)
   {
     temp = arr[i];
     arr[i]=arr[largest];
     arr[largest]=temp;
     heapify(arr, n, largest);
   }
}
// main function to do heap sort
void heapSort(int arr[], int n)
{
    int temp;
   // Build max heap
   for (int i = n / 2 - 1; i >= 0; i--)
     heapify(arr, n, i);
   // Heap sort
   for (int i=n-1; i>=0; i--)
   {
     temp = arr[0];
     arr[0]=arr[i];
     arr[i]=temp;
     
     // Heapify root element to get highest element at root again
     heapify(arr, i, 0);
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

    //Sorting Process
    heapSort(arr,n);

    printf("\nShorted Elements Of Array : ");
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }

    return 0;
}
