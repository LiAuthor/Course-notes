#include<stdio.h>
int main()
{
	int x,i,j;
	printf("«Î ‰»Î–– ˝£∫\n");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{
		for(j=x;j>i;j--)
		{
			printf(" ");
	    }
		for(j=1;j<=2*i-1;j++)
		{   
		printf("*");	
		}
		printf("\n");
	}
	 return 0;
}
