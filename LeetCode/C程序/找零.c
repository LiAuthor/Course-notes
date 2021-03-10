#include<stdio.h>
int main()
{
	double price,money=0;
	double money1=0;
	int num=0;
	
	printf("请输入价格:\n");
	scanf("%lf",&price);
	printf("请输入数量:\n");
	scanf("%d",&num);
	printf("请输入面额:\n");
	scanf("%lf",&money1);
	
	printf("找零：%lf",money1-num*price);
	
	return 0;
}
