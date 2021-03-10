#include<stdio.h>
int main()
{   
    void sum(int begin,int end);//声明函数，注意;号 
	sum(10,20);//调用函数 
	sum(20,30);
	return 0;
} 
void sum(int begin,int end)//函数名以及两个参数 
{   int i,sum=0;//函数体 
	for(i=begin;i<end;i++)
	{sum+=i;}
	printf("%d到%d的和是:%d\n",begin,end,sum);
}
