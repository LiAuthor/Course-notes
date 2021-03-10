#include <stdio.h>
#include <stdlib.h>
#define N 10
struct Data{
    int num;
	struct Data *next;
};

struct Data * Insert()
{
   int data,i;
   struct Data *head,*r,*s;
   head = ( struct Data * )malloc( sizeof (struct Data));
   head->next = NULL;   
   r=head;
      for (i=0; i<N; i++ )
      {
     	scanf("%d",&data);
 		s = ( struct Data *)malloc(sizeof (struct Data));
 		s->num = data;
 		s->next = r->next;
 		r->next = s;
 		r=s;
 }
     /*
      printf("the list is :");
 s=head->next;
 while(s!=NULL);
 {
     printf("%d\t",s->num);
 s = s->next;


 }
    printf("\n");*/
    return head;
}
