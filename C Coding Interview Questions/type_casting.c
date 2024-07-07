// type casting
#include<stdio.h>
#include<conio.h>
void main()
/*{
	int a,b;
	float c;
	a=5;
	b=2;
	c=a/b;
	printf("%f",c);
  getch();	
}
// answer is 2.0000 but this is wrong correct answer is 2.5
//so we use type casting for correct ansqwer
*/{
	int a=5,b=2;
	float c;
	c=(float)a/b;
	printf("%.2f",c);
	getch();
}
