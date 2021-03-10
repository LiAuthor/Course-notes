#include<stdio.h>
int sum(int begin,int end);
int main()
{
	int x,y;
	printf("please enter x and y:\n");
	scanf("%d %d",&x,&y);
	//sum(x,y);
    printf("sum=%d",sum(x,y));
    return 0;
}
int sum(int begin,int end) 
{
	int i;
	int sum=0; 
	for(i=begin;i<=end;i++)
	{
		sum=sum+i;
	}
	return (sum);
	//printf("sum=%d\n",sum);
}
