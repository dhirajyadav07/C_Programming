// reverse the given number
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,rev=0;
	printf("Enter the number  ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;                   // another ways  rev=(rev+r)*10
		n=n/10;
	}
	printf("reverse is  %d",rev);      // printf("%d",rev/10)
	getch();
	
}
