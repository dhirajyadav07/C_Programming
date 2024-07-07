// cheaking a number which is even or odd in anothe meathod 
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,ch;
	printf("enter the number ");
	scanf("%d",&n);
	if(n%2==0)
	ch=1;
	else
	ch=2;
	switch(ch)
	{
		case 1: printf("even number");
		break;
		
	    case 2:printf("odd number");
	    break;
	    default: printf("enter natural number");
	    break;
	}
	getch();
}
