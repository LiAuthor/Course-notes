#include<stdio.h>
int main()
{
	int a=3;
	int *b;
	//int b; 
	*b=&a;
	//printf("%d\n",&b);
	//printf("%d\n",b);
	printf("%d\n",*b);
	return 0;
}
