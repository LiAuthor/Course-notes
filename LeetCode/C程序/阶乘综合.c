#include<stdio.h>
int main()
{
	int x;
	int fact=1;
	int i=1;
	printf("请输入一个整数\n");
	scanf("%d",&x);
	//do
	//{
	//	fact*=i;
	//	i++;
	//}while(i<=x);
	
	
	//for(i=1;i<=x;i++)
	//{
	//	fact*=i;
	//}
	
	
	 //while(i<=x)
	 //{
	 //	fact*=i;
	 //	i++;
	 //}
	 
	 
	printf("%d的阶乘是%d\n",x,fact);
	return 0;
}
