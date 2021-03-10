#include<stdio.h>
int main()
{
	int n,f1=1,f0=1,f2;
	int f[10]={1,1};
	int i;
	for(n=2;n<20;n++)
	{
		f2=f0+f1;
		f[n]=f2;
		f0=f1;
		f1=f2;
	}
	printf("你想知道第几个月后兔子对数\n");
	scanf("%d",&n);
	printf("%d\n",f[n-1]);
	return 0;
}
