#include<stdio.h>
	void sum(int begin,int end);//声明 
	int main()
	{
	sum(10,20);                //调用 
	sum(1,5);
	sum(5,10);
	return 0;
    }
    void sum(int begin,int end)//定义 
	{
	int sum=0;
	int i;
	for(i=begin;i<=end;i++)
	{
		sum+=i;
	}
	printf("%d到%d的和是%d\n",begin,end,sum);
	}
	
