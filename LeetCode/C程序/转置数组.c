#include<stdio.h>
int main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	int b[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",a[i][j]);
			b[j][i]=a[i][j];
		}
		printf("\n");
	}
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
		printf("%3d",b[j][i]);	
		}
		printf("\n");
	}
	return 0;
}
