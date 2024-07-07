#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int arr[]={9,3,5,2,1,6};
int i,j,k,temp;
for(j=1;j<6;j++){
	
	i=j-1;
	while(arr[i+1]<arr[i]){
		temp=arr[i+1];
		arr[i+1]=arr[i];
		arr[i]=temp;
		i=i-1;
	}

}
for(k=0;k<6;k++){
	printf(" %d ",arr[k]);
}

return 0;
}


