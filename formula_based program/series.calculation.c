// calculation of series that is 1/1!+2/2!+3/3!+.........
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,f;
	float s=0;
	printf("Enter the number up to calculate the series");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		f=f*i;
		s=s+(float)i/f;
		i++;
	}
	printf("%.2f",s);
	getch();
}
