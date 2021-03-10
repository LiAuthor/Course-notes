#include<stdio.h>
int main()
{
	int x;
	int i=1;
	int fact=1;
	
	printf("请输入一个整数：\n");
	scanf("%d",&x);
	
	while(i<=x){
		fact*=i;
		i++;
	}
	printf("%d!=%d",x,fact);
	return 0;
	 
}
