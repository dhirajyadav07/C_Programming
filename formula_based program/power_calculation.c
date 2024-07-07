//two numbers are input second is power of first
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,p;
	printf("Enter the numbers\n");
	scanf("%d %d",&a,&b);
	printf("first number =%d\n",a);
	printf("second number =%d\n",b);
	p=pow(a,b);
	printf(" first number is to the power of second number =%d",p);
}
