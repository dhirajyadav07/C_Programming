#include<stdio.h>
//USING FOR LOOP
/*void reverseArray( int arr[], int n){
	int temp,i;
	for(i=0;i<n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
		
	}
}*/
//USING WHILE LOOP
void reverseArray(int arr[],int start,int end){
	int temp;
	while(start<end){
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
//PRINT FUNCTION FOR PRINT ARRAY ELEMENT
void print(int arr[],int n)
{int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
//DRIVER CODE
int main()
{
int arr[]={1,2,3,4,5,6};
int n=sizeof(arr)/sizeof(arr[0]);
print(arr,n);
printf("\n reverse of array is: ");
reverseArray(arr,0,n-1);
print(arr,n);


return 0;
}




