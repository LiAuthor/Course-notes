#include<stdio.h>
int main()
{
	int x;
	int i;
	int isprime=1;
	
	printf("请输入一个整数：");
	scanf("%d",&x);
	
	for(i=2;i<x;i++){
		if(x%i==0){
			isprime=0;
		}
	}
	if(isprime==1){
		printf("%d是素数\n",x);
	}else{
	printf("%d不是素数\n",x);	
	}
	return 0;
}
