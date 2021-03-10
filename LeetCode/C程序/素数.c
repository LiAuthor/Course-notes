#include<stdio.h>
int main()
{
	int x;
	int i;
	//int isprise=1;
	
	scanf("%d",&x);
	
	for(i=2;i<x;i++){
		if(x%i==0){
			//isprise=0;
			break;
		}
	}
	if(i==x){
	//if(isprise==1){
	printf("是素数\n");
	}else{
	printf("不是素数\n");
	}
	return 0;
}
