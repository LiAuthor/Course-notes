#include<stdio.h>
int main()
{
	int a[10],i;
	printf("please enter 10 numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%3d",a[i]);
	}
	printf("\n");
	return 0;
}
