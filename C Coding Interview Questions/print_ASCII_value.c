// ASCII (american standard code for information interchange)
//enter the capital character and print the small charecter
//65=A  97=a    (65+32=97)
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
     printf("enter a char: ");
	 scanf("%c",&ch);
	//ch=ch-32;
	printf("ASCII value is %d",ch);
	getch();
	
}
