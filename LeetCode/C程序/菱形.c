#include<stdio.h>
int main()
{
	int n,j,i,a,k;
	printf("请输入行数(奇数)：\n");
	
	scanf("%d",&n);
	for(i=1;i<=(n+1)/2;i++)
	{
		for(j=(n+1)/2;j>i;j--)
		printf(" ");
		for(j=1;j<=2*i-1;j++)
		printf("*");
		printf("\n");
    }
    for(i=1;i<(n+1)/2;i++)
	{
       for(j=0;j<i;++j)
	   printf(" ");
       for(j=0;j<2*((n+1)/2-i)-1;++j)
       printf("*");
       printf("\n");
    }
	return 0;
}
