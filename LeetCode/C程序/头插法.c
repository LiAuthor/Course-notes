#include <stdio.h>
#include <stdlib.h>
#define N 10


struct Data{
   int num;
   struct Data *next;
};


int main ( int argc , char * argv[])
{
   int data,i;
   struct Data *head,*p;
   head = (struct Data *)malloc (sizeof(struct Data));
   head->next = NULL;
     for ( i = 0; i < N; i++)
     {
    	scanf ("%d",&data);
		p = ( struct Data *)malloc(sizeof(struct Data));
		p->num = data;
		p->next = head->next;
		head->next = p;
	}

printf("the list is :");
while (p!=NULL)
{
	printf("%d\t",p->num);
	p=p->next;
}
     printf("\n");
     return 0;
}
