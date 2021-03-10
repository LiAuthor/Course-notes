#include<stdio.h>
int main()
{
	int a[10];
	
	printf("%p\n",a);
	printf("%p\n",&a);          //a与&a与&a[0]结果相同 
	printf("%p\n",&a[0]);
    printf("%p\n",&a[1]);
	printf("%p\n",&a[2]);
	return 0;
} 
