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
	printf("%d",sizeof(ElementType));
	return 0;
}
