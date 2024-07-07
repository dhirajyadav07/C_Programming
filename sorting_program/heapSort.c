/*
 * Heap Sort Program in C
 */
 
#include<stdio.h>
# define max 30
// function prototyping
void heapify(int*,int, int);
void heapsort(int*, int);

 int i,n,arr[max];
 
int main()
{ 
printf("how many element are u want to sort ");
scanf("%d",&n);
printf("Enter the element ");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("\nArray before sorting:\n");
   for(i=0;i<n;i++)
printf("%d  ",arr[i]);
 heapsort(arr, n);
 printf("\n\nArray after sorting:\n");
    for(i=0;i<n;i++)
    printf("%d  ",arr[i]);
  return 0;
}
 
/* sorts the given array of n size */
void heapsort(int* arr, int n)
{
    // build the binary max heap
    for ( i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
 
    // sort the max heap
    for ( i = n - 1; i >= 0; i--)
    {
        // swap the root node and the last leaf node
        int temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;
 
        // again heapify the max heap from the root 
        heapify(arr, i, 0);
    }
}
 
/* heapify the subtree with root i */
void heapify(int* arr, int n, int i)
{
    // store largest as the root element
    int largest = i;
 
    int left = 2 * i + 1;
    int right  = 2 * i + 2;
 
    // now check whether the right and left right is larger than the root or not
    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
 
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
 
    // if the root is smaller than the children then swap it with the largest children's value
    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
 
        // again heapify that side of the heap where the root has gone
        heapify(arr, n, largest);
    }
}
 


    

