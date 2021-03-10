#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	for(int i=1;i<=2*x;i++){//先正序输出一个等腰三角形 
		if(i%2!=0){
		int y=i;
		while(y+2<=2*x){
			printf(" ");
			y+=2;
		}
		int n=i;
		while(n-1>=0){
			printf("*");
			n--;
		}
		printf("\n");
	}
	}
		for(int i=2*(x-1);i>0;i--){//在倒着输出一个比上一个少一行的倒等腰三角形 
		if(i%2!=0){
		int y=i;
		while(y+2<=2*x){
			printf(" ");
			y+=2;
		}
		int n=i;
		while(n-1>=0){
			printf("*");
			n--;
		}
		printf("\n");
	}
	}
	return 0;
}
