#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int value;
	int *next;
}Node;

int main()
{
	Node *p;
	Node *head=NULL;
	int number=0;
	p=(Node*)malloc(sizeof(Node));
	while(number!=-1)
	{
		scanf("%d",&number);
		p->value=number;
		p->next=NULL;
	}
	printf("%d",p);
	/*for(p=p->head;p;p->next)
	{
		printf("%d",p->value);
	}*/
	return 0;
} 
