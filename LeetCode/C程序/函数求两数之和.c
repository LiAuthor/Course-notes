#include<stdio.h>
int main()
{
	int add(int x,int y);
	int a,b,c;
	printf("please enter two integer number:\n");
	scanf("%d %d",&a,&b);
	c=add(a,b);
	printf("sum is %d\n",c);
	return 0;
}
int add(int x,int y)
{
	int z;
	z=x+y;
	return(z);
}
