#include<stdio.h>
int main()
{
	int swap(int *p1,int *p2);
	int a,b;
	int *pointer_1,*pointer_2;
	printf("please enter two numbers:\n");
	scanf("%d %d",&a,&b);
	pointer_1=&a;
	pointer_2=&b;
	if(a<b)
	{
	swap(pointer_1,pointer_2);
    }
	printf("max=%d,min=%d\n",*pointer_1,*pointer_2);
}
int swap(int *p1,int *p2)
{
	//int p;
	//p=*p1;
	//*p1=*p2;
	//*p2=p;
	int *p;
	p=p1;
	p1=p2;
	p2=p;
}
