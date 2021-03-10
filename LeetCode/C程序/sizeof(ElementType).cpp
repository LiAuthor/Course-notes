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
	S.base=new ElementType[MAXSIZE];
	S.top=S.base;
	S.stacksize=MAXSIZE;
	return 0;
}
int main()
{
	int a=2,b=3,c=4; 
	printf("%d\n",sizeof(ElementType));
	printf("%d\n",a+b*c);
	return 0;
}
