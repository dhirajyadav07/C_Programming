#include<stdio.h>
#include<math.h>
main()
{

int i,n,gamma;

scanf("%d",&n);
for(i=n-1;i>1;i--)
{gamma=gamma*i;

printf("gamma n = %d",gamma);
}
	getch();
}



