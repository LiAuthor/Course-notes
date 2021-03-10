#include<stdio.h>
#define MAXSIZE 100
typedef struct{	 
	char name;
	float price;
}ElemType;
typedef struct{			//数组指针 
	ElemType *elem;
	int length;
}SqList; 
int InItList(SqList &L)//线性表的初始化 
{
	L.elem=ElemType[MAXSIZE];
	if(!L.elem) exit(ERROR);
	L.length=0;
	return OK; 
} 
int CreateList(SqList L)
{
	printf("Please enter name and price in turn\n");
	scanf("%s",L.elem);
}
int FindElem(SqList L)//线性表的查找 
{	
	ElemType e;
	printf("Which data do you want to know?\n");
	//scanf();
	for(i=0;i<L.length;i++)
	if(L.elem[i]==e) return i+1;
	return 0;
}
int GetElem(SqList L)//线性表指定位置的取值 
{
	int i;
	ElemType e;
	printf("Which position do you want to know?\n");
	scanf("%d",&i);
	if(i<1||i>L.length) return ERROR;
	e=L.elem[i-1];
	return OK;
}
int ListInsert(SqList L)//线性表的插入 
{
	int j,i;
	ElemType e;
	//printf("");
	//scanf("");
	if((i<1)||(i>L.length+1)) return ERROR;
	if(i==MAXSIZE) return ERROR;
	for(j=L.length-1;j>i-1;j--)
	L.elem[j+1]=L.elem[j];
	L.elem[i-1]=e;
	++L.length;
	return OK;
} 
int ListDelete(SqList L,int i)//线性表的删除 
{
	if(i<1||i>L.length) return ERROR;
	for(j=i;j<length;j++)
	L.elem[j-1]=l.elem[j];
	--L.length;
	return OK;
} 
int main()
{
	int x;
	InItList(&list);
	CreateList(list);
	printf("1:GetElem			2:FindElem\n");
	printf("3:ListInsert		3:ListDelete\n");
	printf("Please enter your choice:\n");
	scanf("%d",&x);
	switch(x)
	{
		case 1:GetElem(list);break;	
		case 2:FindElem(list);break;
		case 3:ListInsert(list);break;
		case 4:ListDelete(list);break;
	}
	return 0;
}
	

