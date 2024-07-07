
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	printf("Enter the number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0)
		{
			printf("%d\n",i*i*i);
		}
		
	}
	getch();
	}
