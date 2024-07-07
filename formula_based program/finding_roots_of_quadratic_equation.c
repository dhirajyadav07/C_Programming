//ROOTS OF QUADRATIC EQUATION
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a,b,R1,R2,d,R,c;
	printf("enter the value of  a= ");
	scanf("%f",&a);
	printf("enter the value of  b= ");
	scanf("%f",&b);
printf("enter the value of  c= ");
	scanf("%f",&c);
	
	
	d=(b*b)-(4*a*c);
	if(d>0)
	{
		R1=((-1)*b+sqrt(d))/(2*a);
		printf("FIRST ROOT = %.2f\n",R1);
				R2=((-1)*b-sqrt(d))/(2*a);
					
					printf("SECOND ROOT = %.2f\n",R2);
					
				}
				else
				{
					if(d=0)
					{
					R=((-1)*b)/(2*a);
					printf("R is %.2f\n",R);
					}
					else
				{printf(" ONLY IMAGINARY ROOTS EXIST \n ");
					}	
	}
	getch();
	
}
