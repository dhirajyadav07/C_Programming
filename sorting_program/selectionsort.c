#include<stdio.h>
void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}
void selectionsort(int arr[],int n){
	int i,j,k;
	for(i=0;i<n-1;i++){
	        
		for(j=k=i;j<n;j++)
		{
			
			if(arr[j]<arr[k]){
				k=j;
				
			}
			
		}
		swap(&arr[i],&arr[k]);
		
	}
}

int main()
{
int arr[100], n, i, j, min, temp;
printf("Enter number of elements ");
scanf("%d", &n);
printf("Enter %d Numbers ", n);
for (i = 0; i < n; i++)
scanf("%d", &arr[i]);
selectionsort(arr,n);
printf("sorted array is \n");

for(i=0;i<n;i++){
	printf("%d ",arr[i]);
}


return 0;
}


