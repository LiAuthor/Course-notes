#include<stdio.h>
int main()
{
	int a[]={11,24,26,56};
	int *p;
	p=&a[0];
	printf("a[0]=%d\n",a[0]);
	printf("p=%d\n",p);
	printf("%x\n",&a[0]) ;
	printf("*p=%d\n",*p);
	return 0;
}
