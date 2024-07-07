// series is 1-2+3-4+5-6+7...........    for all even and odd term 
 #include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,s=0,n;
	printf("Enter the value of n   ");
	
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		s=s-i;
		else
		s=s+i;
		i++;
	}
	printf("%d",s);
	getch();
}
