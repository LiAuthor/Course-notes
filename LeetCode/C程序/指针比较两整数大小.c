#include<stdio.h>
int main()
{
	int a,b,*p,*p1,*p2;
	printf("Please enter twe numbers:\n");
	scanf("%d %d",&a,&b);
	p1=&a;p2=&b;
	if(a<b){
		p=p1;p1=p2;p2=p;
	}
	printf("a=%d,b=%d\n",a,b);
	printf("max is %d,min is %d",*p1,*p2);
	return 0;
}
