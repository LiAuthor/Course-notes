#include<stdio.h>
int main()
{
	double x=0,sum=0;
	printf("请只输入分母位\n");
	while(x!=-1)
	{
		scanf("%lf",&x);
		sum+=1/x;
	}
	printf("sum=%f\n",sum+1);
	return 0;
}
