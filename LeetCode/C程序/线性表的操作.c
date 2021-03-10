#include<stdio.h>
#include<stdlib.h>
typedef struct{
	ElementType Date[MAXSIZE];
	int Last;
}List;
List L,*PtrL;

List MakeEmpty();
//初始化一个空线性表L
void input(List L);
//在空线性表L中存放数据
void output(List L);
//打印线性表L中的数据 
ElementType FindKth(int K,List L);
//根据位序K，返回相应的元素 
int Find(ElementType X,int i,List L);
//在线性表L中查找X的第一次出现的位置 
void Insret(ElementType X,int i,List L);
//在位序i前插入一个新的元素X 
void Delete(int i,List L);
//删除指定位序i的元素 
int Length(List L);
//返回线性表L的长度n 

int main()
{
	 makeempty();
	 input(L);
	 output(L);
	 
}

List *MakeEmpty()
{
	List *PtrL;
	PtrL=(List *)malloc(sizeof(List));
	PtrL->Last=-1;
	return PtrL;
}

void input(List L)
{
	scanf("%d",&PtrL->Data);
	while(*PtrL->List)
	{
		scanf("%d",&PtrL->Data);
		PtrL->List++;
		PtrL->Data++;
	}
}

void output(List L)
{
	int n;
	for(n=0;n<PreL->last;n++)
	{
		printf("%d",PtrL->Date);
		PtrL->Date++; 
	}
} 

int Find(ElementType X,List *PtrL)
{
	int i=0;
	while(i<=PtrL->List&&PtrL->Data[i]!=X)
    {
    	i++;
    }
	if(i>PtrL->Last) return -1;
	else return i;
}

void Insert(ElementType X,int i,List *PtrL)
{
	int j;
	if(PtrL->Last==MAXSIZE-1)
	{
		printf("表满");
		return;
	}
	if(i<1||i>PtrL->Last+2)//为什么为Last+2 
	{
		printf("位置不合法");
		return;
	}
	for(j=PtrL->Last;j>=i-1;j--)
	{
		PtrL->Data[i+1]=PreL->Data[j];
	}
	PreL->Data[i-1]=X;
	PreL->Last++;
	return; 
}

void Delete(int i,List *PtrL)
{
	int j;
	if(i<1||i>PtrL->Last+1)
	{
		printf("不存在%d个元素",i);
		return; 
	}
	for(j=i;j<=PtrL->Last;j++)
	{
		PtrL->Date[j-1]=PtrL->Data[j];
	}
	PtrL->Last--;
	return;
}
