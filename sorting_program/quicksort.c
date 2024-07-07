#include <stdio.h>

// function to swap elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// function to find the partition position
int partition(int array[], int p, int r) {
  
  // select the rightmost element as pivot
  int x = array[r];
  
  // pointer for greater element
  int j,i = (p - 1);

  // traverse each element of the array
  // compare them with the pivot
  for ( j = p; j < r; j++) {
    if (array[j] <= x) {
        
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      
      // swap element at i with element at j
      swap(&array[i], &array[j]);
    }
  }

  // swap the pivot element with the greater element at i
  swap(&array[i + 1], &array[r]);
  
  // return the partition point
  return (i + 1);
}

void quickSort(int array[], int p, int r) {
  if (p < r) {
    
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int q = partition(array, p, r);
    
    // recursive call on the left of pivot
    quickSort(array, p, q - 1);
    
    // recursive call on the right of pivot
    quickSort(array, q + 1, r);
  }
}

// function to print array elements
void printArray(int array[], int size) {
	int i;
  for (i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// main function
int main() {
  int i, n, arr[25];

   printf("How many elements are u going to enter?: ");
   scanf("%d",&n);

   printf("Enter %d elements: ", n);
   for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

  
//  int n = sizeof(data) / sizeof(data[0]);
  
  printf("Unsorted Array\n");
  printArray(arr, n);
  
  // perform quicksort on data
  quickSort(arr, 0, n - 1);
  
  printf("Sorted array in ascending order: \n");
  printArray(arr, n);
}

