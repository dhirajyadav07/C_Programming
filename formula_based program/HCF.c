#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a,b;
	printf("Enter the two number  ");
	scanf("%d  %d",&a,&b);
	while(a!=b)
	{
		if(a>b)
		a=a-b;
		else
		b=b-a;
		
	}
	printf("Required HCF is %d ",a);
	getch();
	
}
