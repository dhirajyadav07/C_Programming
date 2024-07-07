// program to find the sum of even  digit  and the product of odd  digit 
#include<stdio.h>
#include<conio.h>
void main()
{
	int r,s=0,p=1;
	long int n;
	printf("Enter the number  ");
	scanf("%ld",&n);
	while(n>0)
	{
		r=n%10;
		if(r%2==0)
		s=s+r;
		else
		p=p*r;
		n=n/10;
	}
	printf("the sum of even  digit is %d and the product of odd  digit is %d",s,p);
	getch();
}
