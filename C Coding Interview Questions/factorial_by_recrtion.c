// factorial by recurtion
#include<stdio.h>
#include<conio.h>
int fun(int n)
{
	if(n==1)
	return 1;
	else 
	return n*fun(n-1);
}
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("factorial of %d is %d",n,fun(n));
	return 0;
	getch();
}
