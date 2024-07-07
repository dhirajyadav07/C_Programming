#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,x,y;
	printf("Enter the two number  ");
	scanf("%d  %d",&a,&b);
	x=a;
	y=b;
	while(a!=b)
	{
		if(a<b)
		a=a+x;
		else
		b=b+y;
	}
	printf("the required LCM  is %d",a);
	getch();
}
