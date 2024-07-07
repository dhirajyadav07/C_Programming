#include<stdio.h>
#include<conio.h>
void main()
{
	int i,rev=0,n,r;
	printf("Enter the number  ");
	scanf("%d",&n);
	while(n>0)
	{
		i=n%10;
		rev=rev*10+i;
		n=n/10;
		
	}
	while(rev>0)
	{
		r=rev%10;
		rev=rev/10;
		if(r==0)
		printf("zero\t");
		if(r==1)
		printf("one\t");
		if(r==2)
		printf("two\t");
		if(r==3)
		printf("three\t");
		if(r==4)
		printf("four\t");
		if(r==5)
		printf("five\t");
		if(r==6)
		printf("six\t");
		if(r==7)
		printf("seven\t");
		if(r==8)
		printf("eight\t");
		if(r==9)
		printf("nine\t");
		
		
	}
	getch();
}
