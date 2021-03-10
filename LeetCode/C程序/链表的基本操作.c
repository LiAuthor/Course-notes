#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
	int date;
	struct Node *next;
}Node,*LinkedList;

LinkedList LinkedListInit();
int LinkedList_Creat();
void LinkedList_Show(Node *L);
void LinkedList_Delete(Node *L);

int main()
{
	LinkedList list;
	list=LinkedList_Creat();
	LinkedList_Show(list);
	void LinkedList_Delete(list);
}
LinkedList LinkedListInit() 
{  
    Node *L;
    L=(Node*)malloc(sizeof(Node)); 
    if(L==NULL) 
	{   
        printf("Failed to apply for the memory space\n");  
    }  
    L->next=NULL;                    
    return L;  
}  
int LinkedList_Creat()
{
	Node *L;
	int i,number,t;
	L=(Node*)malloc(sizeof(Node));
	L->next=NULL;
	printf("Please enter the quantity:\n");
	scanf("%d",&i);
	for(t=0;t<i;t++)
	{
		printf("Please enter the %d digit:",t+1);
		scanf("%d",&number);
		Node *p;
		p=(Node*)malloc(sizeof(Node));
		p->date=number;
		p->next=L->next;
		L->next=p;
	}
}

void LinkedList_Show(Node *L)
{
	Node *p;
    p=L->next;
    while(L!=NULL)
    {  
        printf("%d ",p->date); 
        p=p->next;  
    }
    printf("\n");
}

void LinkedList_Delete(Node *L)
{
	int i,n;  
    Node *p,*s;  
    p=L;  
    i=1;  
    printf("Please enter the deleted location£ºn=");  
    scanf("%d",&n);  
    while(p&&i<n)  
    {  
        p=p->next;  
        ++i;  
    }  
    if(!(p->next)||i>n)  
        printf("The location of the deletion is not legal!\n");    
    s=p->next;  
    p->next=s->next;  
    free(s);  
} 
