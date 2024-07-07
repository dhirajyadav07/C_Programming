#include<stdio.h>

main()
{   
int n;
    printf("Enter the size of array: ");
     scanf("%d",&n);
	int a[100];
	int min,loc_max,i,max,loc_min;   // loc = position of element
	for(i=0;i<n;i++)
{      scanf("%d",&a[i]);
	}	
	min=a[0];
	max=a[0];
	
	loc_min=0;
	for(i=0;i<n;i++)
	{
		if(min>a[i])
	{min=a[i];
		loc_min=i;
		
		}
			
	}
	printf("position=%d,min=%d ",loc_min+1,min);
	loc_max=0;
	for(i=0;i<n;i++)
	{
		if(max<a[i])
	{max=a[i];
		loc_max=i;
		
		}
			
	}
	
	printf("\n position =%d,max=%d",loc_max+1,max);
	
	
}
