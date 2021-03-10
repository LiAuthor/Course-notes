#include<stdio.h>
int sign(int x);
int main()
{
	int a;
	printf("请输入一个数字:\n");
	scanf("%d",&a);
	sign(a);
	printf("sign(%d) is %d",a,sign(a));
}
int sign(int x)
{
	int z=0;
	if(x>0)
	{z=1;}
	else
	{
		if(x<0)
		z=-1;
		else
		z=0;
	}
	return z;
}
//if (80<=t[i]<=89) 
//	  printf("B\n");
//else if (70<=t[i]<=79) 
//	  printf("C\n");
//else if (60<=t[i]<=69) 
//	  printf("D\n");
//else if (0<=t[i]<=59)
//	  printf("E\n");
//else if (t[i]>100) 
//	  printf("Score is error!");
//多重判断语句的解决办法 
