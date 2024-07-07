// calculation of series 2^2+4^4+6^6+.......... 
 #include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,n,j=2,x;
	long int s=0;
	printf("Enter the value of n  ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{   x=pow(j,j);
		s=s+x;
		j+=2;
		i++;
		
	}
	printf("%ld",s);
	getch();
	
}
