#include<stdio.h>
int main()
{
	int x,i,n,m;
	int cnt=0;
	for(x=2;cnt<200;x++)
	{
		for(i=2;i<x;i++)
		{
			if(x%i!=0)
			{
			    cnt++;
			}
		}
	}
	if(cnt=6)
	printf("%d",x);
	return 0;
}
