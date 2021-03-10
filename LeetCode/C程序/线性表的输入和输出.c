#include<stdio.h>
#define MAXSIZE 100
typedef struct{	 
	//char name[10];
	int price;
}Book;
typedef struct{		 
	Book *elem;
	int length;
}SeqList;
int InitList(SeqList &L) 
{
	L.elem=new Book[MAXSIZE];
	L.length=0;
	printf("初始化操作完成\n");
	return 0; 
}
int CreateList(SeqList L)
{
	int i,n;
	printf("你想输入多少组数据:\n");
	scanf("%d",&n);
	printf("请依次按顺序输入数据:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&L.elem[i]);
        L.length++;
    }
    printf("数据输入操作完成\n");
    return 0;
} 
int OutList(SeqList L)
{
	int i;
	for(i=0;i<L.length;i++)
	{
		printf("%d",L.elem[i]);
	}
	printf("数据输出操作完成\n");
	return 0;
}
int main()
{
	SeqList list;
	InitList(list);
	CreateList(list);
	OutList(list);
	return 0;
}
