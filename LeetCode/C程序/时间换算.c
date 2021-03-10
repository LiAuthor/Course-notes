#include<stdio.h>;
int main()
{
	int h1,h2,m;
	printf("请输入BJT时间:\n");
	scanf("%d %d",&h1,&m);
	if(h1<8){
		h2=24+(h1-8);
	}else{
		h2=h1-8;
	}if(m<10){
		printf("UTC时间为%d 0%d\n",h2,m);	
	}else{
		printf("UTC时间为%d %d\n",h2,m);
	}
	return 0;
}
