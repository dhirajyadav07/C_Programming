#include<stdio.h>
#include<conio.h>
int main()
{
	int n,b,i,r,s=0;
	printf("Enter the number between 1 to 1000 =");
	scanf("%d",&n);
	b=n;
	for(i=1;i<1000;i++)                   //for(i=1;i<=1000;i++)
	{                                     //{  n=i;
		r=n%10;                           //while(n>0)
		s=s+(r*r*r);                     //{  r=n%10;
		n=n/10;                          //   s=s+(r*r*r);
	}                                    //   n=n/10;
//	printf("%d",s);
	if(s==b)
	printf("number is ARMSTRONG number ");
	else
	printf("NOT ARMSTRONG NUMBER");
	getch();
}
