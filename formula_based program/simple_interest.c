/simple intrest program*/
#include<stdio.h>
#include<conio.h>
void main()
{ 
 float p,r,t,SI;
 printf("enter the value of principle , rate , and time in year\n");
 scanf("%f %f %f",&p,&r,&t);
 printf("principle=%.2f\n",p);
 printf("rate=%.2f\n",r);
 printf("time=%.2f\n",t);
 SI=(p*r*t)/100;
 printf("simple intrest = (%.2f * %.2f * %.2f)/100 = %.2f",p,r,t,SI);
}
