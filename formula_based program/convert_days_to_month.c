// convert days into month
#include<stdio.h>
#include<conio.h>
void main()
{ int d,m;
printf("Enter the number of days\n");
scanf("%d",&d);
m=d/30;
d=d%30;
printf("%d month %d day ",m,d);

}
