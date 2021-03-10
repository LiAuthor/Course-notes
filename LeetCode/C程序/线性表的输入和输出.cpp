#include<stdio.h>
#include<string.h>
#define MAXSIZE 100
typedef struct{	 
	char name[10];
	float price;
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
int CreateList(SeqList &L)
{
	int i,n;
	printf("请输入待存数据的总数:\n");
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("请输入第%d组的书名和价格:\n",i+1);
    	scanf("%s %f",&L.elem[i].name,&L.elem[i].price);
        ++L.length;
    }
    printf("\n数据输入操作完成\n");
    return 0;
} 
int InsertList(SeqList &L)
{
	int position,i;
	printf("请输入插入数据的位置:\n");
	scanf("%d",&position);
	while((position<1)||(position>L.length))
	{
		printf("插入的位置不合法,请重新输入:\n");
		scanf("%d",&position);
	} 
	for(i=L.length;i>position-1;i--)
	L.elem[i]=L.elem[i-1];
	printf("请输入插入数据的书名和价格:\n");
	scanf("%s %f",&L.elem[position-1].name,&L.elem[position-1].price);
	++L.length;
	printf("\n数据插入操作完成\n");
}
int DeleteList(SeqList &L)
{
	int position,i;
	printf("请输入待删除数据的位置:\n");
	scanf("%d",&position);
	while((position<1)||(position>L.length))
	{
		printf("删除的位置不合法,请重新输入:\n");
		scanf("%d",&position);
	}
	for(i=position;i<L.length-1;i++)
	L.elem[i-1]=L.elem[i];
	--L.length;
	printf("\n数据删除操作完成\n");
}
int OutList(SeqList &L)
{
	int i;
	printf("L.length=%d\n",L.length);
	for(i=0;i<L.length;i++)
	{
		printf("%s\n",L.elem[i].name);
		printf("%f\n",L.elem[i].price);
	}
	printf("\n数据输出操作完成\n");
	return 0;
}
int FindList(SeqList &L)
{
	int position,one,twe,i;
	printf("请选择查找方式:\n");
	printf("\n1.已知位置找元素		2.已知元素找位置\n");
	scanf("%d",&one);
	switch(one)
	{
		case 1:
		printf("请输入位置:\n");
		scanf("%d",&position);
		printf("书名为%s,价格为%f",L.elem[position-1].name,L.elem[position-1].price);
		printf("\n查找操作完成\n");break;
		case 2:
		printf("你已知哪一项:\n");
		printf("\n1.已知书名		2.已知价格\n");
		scanf("%d",&twe);
		switch(twe)
		{
			case 1:
			char FindName[10];
			printf("请输入书名:\n");
			scanf("%s",&FindName);
			for(i=0;i<L.length;i++)
			{
				if(strcmp(FindName,L.elem[i].name)==0)
				printf("该书的价格为%f,位置为%d\n",L.elem[i].price,i+1);
			}
			printf("\n查找操作完成\n");break;
			case 2:
			float FindPrice;
			printf("请输入价格:\n");
			scanf("%f",&FindPrice);
			for(i=0;i<L.length;i++)
			{
				if(FindPrice==L.elem[i].price)
				printf("位置为%d,书名为%s\n",i+1,L.elem[i].name);
			}
			printf("\n查找操作完成\n");break;
		}break;
	}
 } 
int main()
{
	int x=0;
	SeqList list;
	InitList(list);
	CreateList(list);
	printf("1.插入	2.删除	3.查找	4.打印	5.退出\n");
	while(x!=5) 
	{
		printf("请输入操作序号:\n");
		scanf("%d",&x);
		switch(x)
		{
			case 1:InsertList(list);break;
			case 2:DeleteList(list);break;
			case 3:FindList(list);break; 
			case 4:OutList(list);break;
			case 5:break;
		}
	}
	return 0;
}
