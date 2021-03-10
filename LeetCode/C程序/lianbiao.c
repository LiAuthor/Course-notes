#include<stdio.h>
#include<stdlib.h>
//#include"node.h"
typedef struct_node{
	int value;
	struct_node*next;
}Node;
int main()
{
	Node *head=NULL;
	int number;
	do
	{
		scanf("%d",&number);
		if(number!=-1)
		{
		//   add to linked-list
		Node *p=(Node*)malloc(sizeof(Node));
		p->value=number;
		p->next=NULL;
		// find the last
		Node *last=head;
		if(last)
		{
			while(last->next)
			{
				last=last->next;
			}
			//  attach
			last->nexp=p;
		} else
		 {head=p;}
	    }
	}while(number!=-1);
}
