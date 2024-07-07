#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,c=0;
	printf("Enter the number ");
	scanf("%d",&n);  
	          
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c=c+1;
}
	if(c==2)
	printf("%d is prime ",n);
	else
	printf("%d is not prime number",n);
	getch();
}            
/*using break statement
for(i=2;i<=n;i++)
{
	if(n%i==0)
	break;
	
}
if(n==i)
printf("prime number");
else
printf("not prime");
getch();
}*/
