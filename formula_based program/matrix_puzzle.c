#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int sum=0,i,j;
int	arr[6][6]={{01,02,03,04,05,06},{07, 38, 89,10,11,62},{13,14,15,16,17,18},{19,29,21,22,23,24},{52,26,72,28,29,30},{31,32,33,34,35,36}};
void printsum();
void printMatrix();
int max(int* a[4]);
int main()
{
printMatrix();
printf("\n");
printsum();
return 0;
}

void printMatrix()
{
   int i,j;
   for(i=0;i<6;i++)
   {
	for(j=0;j<6;j++)
	    {
		 printf(" %0.2d ",arr[i][j]);
        }
     	  printf("\n");
}   }

void printsum(){
	int n=0,col,row,a[16];
	printf("The Sum Of element Of Pattern I Is : ");
for(row=0;row<4;row++)
{
    
	for(col=0;col<4;col++)
	{
		sum=0;
		for(i=row;i<row+3;i++)
		{
			for(j=col;j<col+3;j++)
			{
				if(i==row||i==2+row)
				sum=sum+arr[i][j];
				if(i==row+1&&j==col+1)
				sum=sum+arr[i][j];
			}	
		}
		printf(" %d ",sum);
		a[n]=sum;
		n+=1;
	}	
}
int max=a[0];
for(n=0;n<16;n++){
	if(a[n]>max)
		max=a[n];
}
printf("\n The Greatest sum is : %d",max);	

}




