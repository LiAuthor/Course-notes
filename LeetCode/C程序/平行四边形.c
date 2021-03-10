#include<stdio.h>
int main()
{
	int x,j,i;
	
	printf("ÇëÊäÈëĞĞÊı£º");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{
		for(j=x;j>i;j--)
		{
		printf(" ");	
		}
	printf("*****\n");
	}
	return 0; 
}
