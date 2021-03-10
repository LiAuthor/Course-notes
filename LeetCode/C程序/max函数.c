#include<stdio.h>
int max(int x,int y);
int main()
{
    int a,b; 
	printf("请输入两个数字:\n");
	scanf("%d %d",&a,&b);
	printf("the max is %d",max(a,b));
	return 0;
}
int max(int x,int y)
{
	int z=0;
	if(x>y)
	{z=x;}
	else
	{z=y;}
	return z;
}
