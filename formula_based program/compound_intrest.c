// calculation of compound intrest 
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float p,r,t,CI,x;
	printf("Enter the value of principal ,rate and time(in year) respectively\n");
	scanf("%f%f%f",&p,&r,&t);
	printf("principal =%.2f\n",p);
	printf("rate =%.2f\n",r);
	printf("time =%.2f\n",t);
	x=pow((1+r/100),t);
	CI=p*(x);
	printf("compound intrest =%.2f",CI);
	getch();
}
