#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	srand (time(0));
	int number=rand()%100+1;
	int count=0;
	int a=0;
	//定义变量
	printf("我已经想好了一个1到100之间的数,");
	do{
		printf("请你猜猜这个数：\n");
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("哈哈！你猜的数大了。");
	
		}else if(a<number){
			printf("哈哈！你猜的数小了。");
		}
	} while(a!=number);
	//do-while循环 
	printf("太好了，你用了%d次猜到了答案。\n",count);
	return 0;
}
