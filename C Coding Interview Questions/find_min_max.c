#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{  int n=9,i=0,min,max;
	int Arr[]={13,17,4,9,40,28,38,46,2,6};
	
	
     
		min=Arr[i];
		max=Arr[i];
		for(i=1;i<=n;i++){
		
		if(Arr[i]>max)
		{
			max=Arr[i];
		}
		else{
		if(Arr[i]<min)
	    min=Arr[i];
	}
		}
		printf("%d is min %d is max number of this array",min,max);
	


return 0;
}


