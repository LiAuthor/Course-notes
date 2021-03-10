#include<stdio.h>
int main()
{
	int number[10]={0};//遍历数组的第二种方式
	int i=0,x=1;
	//for(i=0;i<10;i++)//遍历数组的第一种方式 
	//{
	//	number[i]=0;
	//}
	while(x!=-1)
	{
		scanf("%d",&x);
		if(x>0&&x<10)
		{
			number[x]++;
		}
	}
	for(x=0;x<10;x++)//这个遍历输出亟待改进 
	{
		printf("%d出现的次数是%d\n",x,number[x]);
	}
	return 0;
}
