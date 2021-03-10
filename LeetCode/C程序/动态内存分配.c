#include<stdio.h>
#include<stdlib.h>//使用malloc函数要用的头文件 
int main()
{
	int number;
	int *a;//问题遗留：int* a与int *a的区别
	//int* a与int *a的类型相同，表示a为int的指针 
	int i;
	printf("输入数量:");
	scanf("%d",&number);
	a=(int*)malloc(number*sizeof(int));
	//malloc函数返回类型是void*,需要类型转换为自己需要的类型，如int*
	//malloc申请的空间以字节为单位，number*sizeof(int)表示：一个int类型占据四个字节
	//一共申请number*4的字节空间，number个int类型 
	for(i=0;i<number;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=number-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	free(a);//malloc向系统要了一部分空间，使用过后要使用free函数将其归还 
	return 0;
}
