#include<stdio.h>
#include<string.h>
typedef struct{
	char Data[30];
	char Firstletter;
	char Lastletter;
}Word;
typedef struct{
	Word *elem;
	int length;
}SeqList;
	int a,i,x=0;//x表示数组指针的下标
	printf("你想输入多少组单词:\n");
	scanf("%d",&a); 
	int array[a];
int InitList(SeqList &L)
{
	L.elem=new Word[30];
	L.length=0;
	printf("\n初始化操作完成\n");
	return 0; 
}
int CreateList(SeqList &L)
{
	int t=0,x=0,y=0;//y表示单词字符串数组的下标 
	char Emptyword;//建立一个空的存储单元，存放首选单词 
	//printf("你想输入多少组单词:\n");
	//scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		//printf("\n请问第%d组中要输入多少个单词:\n",i+1);
		//scanf("%d",&b);
		for(i=0;i<array[t++];i++,x++)
		{
			printf("请输入第%d个单词:",i+1);
			scanf("%s",&L.elem[x].Data);
			++L.length;
			L.elem[x].Firstletter=L.elem[x].Data[0];
			while(L.elem[x].Data[y++]!='\0')
			L.elem[x].Lastletter=L.elem[x].Data[y];
		}
		Emptyword='E';
		L.elem[x+1].Data=Emptyword;
		++length;++x;
	}
	printf("输入操作完成:\n");
	return 0;
}
int ArrangeList(SeqList &L)
{
	int t=0,x=0;
	Word Pointword;//指向一组数据 
	char Pointletter;//指向一个字母 
	for(i=0;i<a;i++)
	{
		for(i=0;i<array[t];t++,i++,x++)//i表示计数变量，t表示数据数组组数的下标 
		{
			Pointword=L.elem[x];	
			while(L.elem[x+1].Data!='e')
			L.elem[x]=L.elem[x+1];
			Pointword.Lastletter
		}
	}
}
int main()
{
	for(i=0;i<a;i++)
	{
		printf("请问第%d组要输入多少个单词:\n",i+1");
		scanf("%d",&array[i]);
	}
	SeqList list;
	InitList(list);
	CreateList(list);
	ArrangeList(list);
}
