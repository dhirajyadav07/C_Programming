// series is 2^2+4^2+6^2+8^2..........
 #include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j=2;
	long int s=0;
	printf("Enter the value of n  ",n);
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		s=s+(j*j);
		j+=2;
		i++;
	}
	printf("%ld",s);
	getch();
}
