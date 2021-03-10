#include<stdio.h>
int main()
{
	int x=0,cnt=0;
	while(x!=-1)
	{
		scanf("%d",&x);
		cnt++;
	}
	printf("%d",cnt-1);
	return 0;
}
