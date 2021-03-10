#include<stdio.h>
int Add(int a,int b);
int main()
{
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	//Add(x,y);
	printf("%d",Add(x,y));
	return 0;
}
int Add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
