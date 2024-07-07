#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c,n,i;
	printf("Enter the number  ");
	scanf("%d",&n);
	printf("%d %d ",a,b);
	for(i=3;i<=n;i++)
	{
	c=a+b;
	a=b;
	b=c;
	printf("%2d ",c);
	}
	getch();
}
