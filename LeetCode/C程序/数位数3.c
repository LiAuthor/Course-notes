#include<stdio.h>
int main()
{
	int x;
	int count=0;
	
	printf("请输入一个整数：");
	scanf("%d",&x);
	
	do{
		x/=10;
		count++;
	} while(x>1);
	printf("这个整数是%d位数\n",count);
	return 0;
}
