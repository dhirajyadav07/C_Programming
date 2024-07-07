#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int tyear,y,tmonth,d,tdays,byear,bmonth,bdays,ageyear,agemonth,agedays;
//detail of present days
printf("enter the present year : ");
scanf("%d",&tyear);
printf("enter the present month number : ");
scanf("%d",&tmonth);
printf("enter the present date : ");
scanf("%d",&tdays);
//detail of birth

printf("enter the birth year : ");
scanf("%d",&byear);
printf("enter the birth month number : ");
scanf("%d",&bmonth);
printf("enter the birth date : ");
scanf("%d",&bdays);
//identify leap year for february
if(tyear%100==0){
	if(tyear%400==0)
		y=366;
	else
	   y=365;
}
else{
	if(tyear%4==0)
		y=366;
	else
		y=365;
}
// cal number of days in a particular month
switch(tmonth){
	
	case 1:
		d=31;
		break;
		
	case 2:
		if(y==366){
			d=29;
		}
		else {
			d=28;
		}
		break;
	case 3:
		d=31;
		break;
	case 4:
		d=30;
		break;
	case 5:
		d=31;
		break;
	case 6:
		d=30;
		break;
	case 7:
		d=31;
		break;
	
	case 8:
		d=31;
		break;
	case 9:
		d=30;
		break;
	case 10:
		d=31;
		break;
	case 11:
		d=30;
		break;
	case 12:
		d=31;
		break;
	
		
	}
	
// calculate age date
if(bdays>tdays){
	tdays=tdays+d;
	tmonth=tmonth-1;
	agedays=tdays-bdays;
}
else{
agedays=tdays-bdays;
}
   
if(bmonth>tmonth){
	tmonth=tmonth+12;
	tyear=tyear-1;
	agemonth=tmonth-bmonth;
	ageyear=tyear-byear;
}
else{
	agemonth=tmonth-bmonth;
	ageyear=tyear-byear;
}

 printf("you are %d year %d month %d day\n",ageyear,agemonth,agedays);
 
 
return 0;
}


