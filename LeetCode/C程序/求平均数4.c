#include<stdio.h>
int main()
{
	int number[100];
	int cnt=0;
	int x=0,sum=0;
	while(x!=-1)
	{
		scanf("%d",&x);
		number[cnt]=x;
		sum+=x;
		cnt++;
	}
	if(cnt>0)
	{
		double average=0;
		int i;
		average=sum/cnt;
		for(i=0;i<cnt;i++)
		{
			if(number[i]>average)
			{
			printf("the number is:%3d\n",number[i]);
		    }
		}
	}
	return 0;
}
