#include<stdio.h>
int main()
{
	int a[4]={1,2,3,4};
	int i,Max;
	int b[1]={0};
	for(i=0;i<4;i++)
	{
		if(a[i]>a[i+1])
		Max=a[i];
		a[i]=a[i+1];
		a[i+1]=Max;
	}
	for(i=0;i<4;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	b[0]=a[3];
	printf("%d",b[0]);
	return 0;
} 
