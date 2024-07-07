//sum of digits of any number
#include<stdio.h>
#include<conio.h>
void main()
{
	int r,n,s=0;
	printf("Enter the number  ",n);
	scanf("%d",&n);
	int b=n;
	while(n>0)
	{
	   r=n%10;
	   s=s+r;
	   n=n/10;	
	} 
	printf("sum of digits = %d",s);
	
	getch();
}
