#include<stdio.h>
int main()
{
	int x; 
	printf("请输入一个整数:\n");
	scanf("%d",&x);
	
	if(x<0){
		printf("x=-1");
	}else if(x>0){
		printf("x=%d",2*x);
	}else{
		printf("x=0");
	}
	return 0;
}
