#include<stdio.h>
main ()
{
	int a[20][25],c[4][5],b[7][5],i,j,m,n;
	printf("number of rows",&m);
	("%d",&m);
	printf("number of columns",&n);
	scanf("%d",&n);
	for(i=0;i<m;i++)
scanf	{
		for(j=0;j<n;j++)
		{
		
		scanf("%d",&a[i][j]);
		}
	}
	
for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		
		scanf("%d",&b[i][j]);
		}
	}

	
	printf("\n");
printf("first matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
	{ 
	printf("%3d",a[i][j]);
		}	
		printf("\n");	
	}
	
	
	printf("\n");
printf("second matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
	{ 
	printf("%3d",b[i][j]);
		}	
	printf("\n");		
	}
	printf("\n");
	printf("third matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]	=a[i][j]-b[i][j];

              printf("%3d",c[i][j]);
		}
		printf("\n");
	}


	
	
	
	
	
	
}

