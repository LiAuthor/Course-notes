#include<stdio.h>
int top(int T);
int down(int D);
int main()
{
	int x,t,d;
	printf("please enter the number:\n");
	scanf("%d",&x);
	t=(x+1)/2;
	d=(x-1)/2;
	top(t);
	down(d);
	return 0;
} 
int top(int T)
{
	int i,k;
	for(i=0;i<=T;i++)
	{
		for(k=0;k<i;k++)
		printf("*");
		printf("\n");
	}
	return 0;
}
int down(int D)
{
	int i,j,k;
	for(i=0;i<D;i++)
	{
		for(k=0;k<=i;k++)
		printf(" ");
		for(j=i;j<D;j++)
		printf("*");
		printf("\n");
	}
	return 0; 
}
