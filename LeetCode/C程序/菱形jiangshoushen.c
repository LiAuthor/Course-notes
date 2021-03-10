#include<stdio.h> 
int main()
{
	int a,b,i,j,k,n;
	printf("请输入奇数行高：\n");
	scanf("%d",&n);      //提醒用户输入高度
	 a=(n+1)/2;
	 b=(n+1)/2-1;         //将菱形分为上下两半部分 
	 
	for (i=0;i<=a;i++)
	{
		for(j=a;j>i;j--)
		printf(" ");     //控制上半部分空白数 
		for(k=0;k<=2*i-2;k++)  //控制上半部分输出星星数 
		printf("*");
		printf("\n"); 
	 }                   //对菱形上半部分进行输出 
	 
	 
	 for (i=0;i<b;i++)
	 {
	 	for (j=0;j<=i;j++)
	    printf(" ");     //控制下半部分空白数 
		for (k=1;k<2*b-2*i;k++)  //控制下半部分输出星星数 
		printf("*");
		printf("\n");
		 
	 }
	 
	return 0;
}

