#include<stdio.h>
int main()
{
	int a[3][3]={0};
	int i,j;
	printf("please enter the number:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	} 
	for(i=2;i>=0;i--)
	{
		for(j=2;j>=0;j--)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
