// BMI CALCULATOR//
#include<stdio.h>
#include<conio.h>

  main()
{ 
	float h,m,BMI;
	printf("enter your height in meter");
	scanf("%f",&h);
	
printf("enter your weight in kilogram");
scanf("%f",&m);

    BMI=(m/(h*h));
printf("your BMI is %f",BMI);
if(BMI<18)
{printf("\nYOU ARE UNDER WEIGHT");
}
else
{
	if(BMI>23)
{printf("\nYOU ARE OVER WEIGHT");
	}
	else
	printf("\nYOU ARE HEALTHY");
}
getch();
}
