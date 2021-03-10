#include<stdio.h>
//int max(int x,int y);
int main()
{
	int i,j,t,a[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<9;j++)
	for(i=0;i<9-j;i++)
	if(a[i]>a[i+1])
	{
		t=a[i];a[i]=a[i+1];a[i+1]=t;
	}
	printf("the sorted numbers:\n");
	for(i=0;i<10;i++)
	printf("%d\n",a[i]);	
	return 0;
}
//int max(int x,int y)
//{
//	int z;
//	z=x>y?x:y;
//	return (z);
//}
