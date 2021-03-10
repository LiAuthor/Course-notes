#include<stdio.h>
int main()
{
	int exchance(int *q1,int *q2,int *q3);
	int a,b,c;
	int *pointer_1,*pointer_2,*pointer_3;
	printf("please enter three numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	pointer_1=&a;
	pointer_2=&b;
	pointer_3=&c;
	exchance(pointer_1,pointer_2,pointer_3);
	printf("The order is:%d %d %d\n",a,b,c);
}
int exchance(int *q1,int *q2,int *q3)
{
	int swap(int *p1,int *p2);
	if(*q1<*q2){swap(q1,q2);}
	if(*q1<*q3){swap(q1,q3);}
	if(*q2<*q3){swap(q2,q3);}
}
int swap(int *p1,int *p2)
{
	int p;
	p=*p1;
	*p1=*p2;
	*p2=p;
}
