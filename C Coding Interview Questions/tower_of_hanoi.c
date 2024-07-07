#include<stdio.h>
void TOH(int n, char src ,char dest ,char aux){
	if(n==1){
		printf("%c --> %c \n",src,dest);
		return;
	}
	TOH(n-1,src,aux,dest);
	printf("%c --> %c\n",src,dest);
	TOH(n-1,aux,dest,src);
}
int main()
{ int n;
printf("Enter the number of disc : ");
scanf("%d",&n);
TOH(n,'A','C','B');

return 0;
}


