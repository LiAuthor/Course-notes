#include<stdio.h>
int main()
{
	int n;
	int i=1;
	int fact=1;
	
	printf("请输入一个整数。\n");
	scanf("%d",&n);
	
	while(i<=n){
		fact*=i;
		i++;
	}
	printf("%d!=%d\n",n,fact);
	return 0;
}
