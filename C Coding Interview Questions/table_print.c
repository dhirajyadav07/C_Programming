#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	printf("Enter the number for print table  ");
	scanf("%d",&n);
	while(i<=10)
	{
		printf("%d * %d = %d\n",n,i,i*n);
		i++;
	}
getch();
}
