#include<stdio.h>
#define MAXSIZE 100
typedef struct{
	char name[10];
	float price;
}ElementType;
typedef struct{
	ElementType *base;
	ElementType *top;
	int stacksize;
}SqStack;
int InitStack(SqStack &S)
{
	S.base=new ElementType[MAXSIZE];//该处new的含义 
	S.top=S.base;
	S.stacksize=MAXSIZE;
	return 0;
}
/*PUSH操作*/
int Push(SqStack &S)
{
	int x=0,i=0;
	printf("\n该栈将存入多少组数据:\n");
	scanf("%d",&x); 
	if(S.top-S.base==S.stacksize)
	{
		printf("\n栈已满!\n");
		return 0;
	}
	while(i<x)
	{
		printf("\n请输入第%d组名字和价格:\n",i);
		scanf("%s %f",&S.top->name,&S.top->price);
		i++;S.top+=sizeof(ElementType);
	}
	printf("\n数据存入完成\n");
	return 0;
} 
/*Pop操作*/
int Pop(SqStack &S)
{
	int x=0,i=0;
	printf("\n将要出栈多少组元素:\n");
	scanf("%d",&x);
	if(S.top==S.base)
	{
		printf("\n全部元素出栈完成!\n");
		return 0;
	}
	printf("\n以下元素将出栈:\n");
	while(i<x)
	{
		printf("%s %f\n",S.top->name,S.top->price);
		i++;S.top-=sizeof(ElementType);
	} 
	printf("\n出栈完毕\n");
	return 0;
 } 
 int Out(SqStack &S)
 {
	while(S.top!=S.base)
	{
		printf("%s %f",S.top->name,S.top->price);
	}
	return 0;
 }
 int main()
 {
	SqStack S_one,S_twe,S_three;
	InitStack(S_one);
	//InitStack(S_twe);
	//InitStack(S_three);
	Push(S_one);
	//Push(S_twe);
	//Push(S_three);
	Pop(S_one);
	return 0;
 }
