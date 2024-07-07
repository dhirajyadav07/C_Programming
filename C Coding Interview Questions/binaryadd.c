#include<stdio.h>

int main()
{
	int j,i,res[7],carry=0;
int a[4]={1,0,1,1};
int b[4]={1,1,0,1};
for(i=0;i<=3;i++){
	if(a[i]+b[i]+carry==0){
		res[i]=0;
		carry=0;
	}
		if(a[i]+b[i]+carry==1){
		res[i]=0;
		carry=0;
	}
		if(a[i]+b[i]+carry==2){
		res[i]=0;
		carry=1;
	}
		if(a[i]+b[i]+carry >2 ){
		res[i]=1;
		carry=1;
	}
}
for(j=0;j<=4;j++){
	printf("%d",res[j]);
}


return 0;
}


