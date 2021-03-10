#include<stdio.h>
int main()
{
	int a=100,b=10;//定义整型变量并初始化 
	int *pointer_1,*pointer_2;//定义指针变量 
	pointer_1=&a;//把变量地址赋给指针变量 
	pointer_2=&b;
	printf("a=%d,b=%d\n",a,b);
	printf("*pointer_1=%d,*pointer_2=%d\n",*pointer_1,*pointer_2);
	return 0;
}
