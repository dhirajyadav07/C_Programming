// find the sum of even place digit  and the product of odd place digit 
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,n,r,s=0,p=1;
	printf("enter the number ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
		i++;
		if(i%2==1)          //  we also use not equal to tha is if(i%2!=0)    it is correct
		s=s+r;
		else
		p=p*r;
	}
	printf("the sum of even place digit is %d and the product of odd place digit is %d ",s,p);
	getch();
}
