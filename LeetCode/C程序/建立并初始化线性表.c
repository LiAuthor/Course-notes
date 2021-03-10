#include<stdio.h>
#include<stdlib.h>
# define MAXSIZE 50
typedef struct{
int ElenemtTypeData[MAXSIZE];
int Last;
}List;
List L,*PtrL;
List *MakeEmpty();

int main()
{
	MakeEmpty();
	return 0;
	
}
List *MakeEmpty()
{
	List *PtrL;
	PtrL=(List *)malloc(sizeof(List));
	PtrL->Last=-1;
	return PtrL;
} 



/*#include <stdio.h>
#include <stdlib.h>
typedef  int  elemtype;  
typedef struct xianxing
{
   struct xianxing *next;
   elemtype number;
}ST;
ST *Init_SequenList()//实现初始化一个线性表的函数
{
   ST *L;
   L = (ST *)malloc(sizeof(ST));
   L->next = NULL;
   return L;
}
ST * add_head(ST *head)//实现往链表内添加数字函数   按照升顺序的 
{
   ST *q ,*p;
   p = head;
   q = (ST *)malloc(sizeof(ST));
   printf("请输入你要添加的数:");
   scanf("%d",&q->number);
   if(p->next == NULL)
   {
      q->next = p->next;
	 p->next = q;
   }
   else
   {
      while(p->next->number < q->number)//比较大小 找到插入的位置
	 {
	    p = p->next;
	 }
	 q->next = p->next;
	 p->next = q;
   }
   return head;
}
void show_head(ST *head)//显示链表
{
   ST *p;
   p = head;
   while(p->next)
   {
      printf("%d\n",p->next->number);
      p = p->next;
   }
}
void main()
{
   ST *head;
   int n ;//n个元素
   printf("请输入你要创建几个元素:");
   scanf("%d",&n);
   head = Init_SequenList();//初始化一个线性表
   while(n)
   {
     head = add_head(head);//往线性表里添加数 
	n--;
   }
   show_head(head);//显示链表
}*/
