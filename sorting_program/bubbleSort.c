#include <stdio.h>
# define max 30
   int main() {
   	int n,i,j,arr[max],temp;
  printf("How many elements are u wants to sort ");
  scanf("%d",&n);
  printf("Enter the element ");
  for(i=0;i<n;i++)
scanf("%d",&arr[i]) ;
  
 

   for (i = 0; i <n -1;i++) {
      
    
    for (j = 0; j < n - i - 1;j++) {
      
      
      if (arr[j] > arr[j + 1]) {
        
      
         temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  
  printf("Sorted Array in Ascending Order:\n");
  for (i = 0; i < n; i++) 
    printf("%d  ", arr[i]);
}
