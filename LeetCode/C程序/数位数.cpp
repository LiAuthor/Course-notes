#include<stdio.h>
int main()
{
	int a;
	int count=0;
	
	printf("请输入一个整数：");
	scanf("%d",&a);
	do{
		a/=10;
		count++;
	}while(a>=1);
	printf("你输入的这个整数是%d位数。\n",count);
	return 0;
}
