// series is 1-2+3-4+5-6.......        only applicable for even term 
#include<stdio.h>
#include<conio.h>
void main()
{
	int s1=0,s2=0,i=1,j=2,n;
	printf("enter the value of n   ",n);
	scanf("%d",&n);
	while(i<=n)
	{
		s1=s1+i;
		s2=s2+j;
		i+=2;
		j+=2;
	}
	printf("%d",s1-s2);
	getch();
}

