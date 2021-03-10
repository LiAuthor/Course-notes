#include<stdio.h>
int main()
{
	int x,i,j;
	scanf("%d",&x);
	for(i=0;i<=x;++i){
		for(j=0;j<i;++j)
		printf(" ");
		for(j=0;j<2*(x-i)-1;++j)//条件的控制 
		printf("*");
		printf("\n");
	}return 0;
}
