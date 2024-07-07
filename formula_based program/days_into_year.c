//convert days into year
#include<stdio.h>
#include<conio.h>
void main()
{
	int y,m,d,x;
	printf("Enter the number of days");
	scanf("%d",&d);
	y=d/365;
	x=d%365;
	m=x/30;
	d=x%30;
	 printf(" %d year",y);
	 printf(" %d month",m);
     printf(" %d day",d);
     getch();
	
}
