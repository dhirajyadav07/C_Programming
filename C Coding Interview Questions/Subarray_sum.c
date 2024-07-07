#include<stdio.h>
void sum(int arr[],int target){
	int i,j,flag;
//	int size=sizeof(arr)/sizeof(arr[0]);
int size=5;
	
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			
			if(arr[j]==target - arr[i]){
				 printf("[%d , %d]",i,j);
			}
			
		}
	}
	
}


int main()
{
int arr[]={1,4,8,3,15};
int target=16;
sum(arr,target);

return 0;
}


