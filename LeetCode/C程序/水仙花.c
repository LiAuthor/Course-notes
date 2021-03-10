#include<stdio.h>
int main()
{
	int a[10]={0};
	int ge,shi,bai;
	int i=0,x,cnt=0;
	printf("请输入3位的实数:\n");
	while(a[i-1]!=0)
	{
		scanf("%d",&a[i]);
		i++;
		cnt++;
	}
	for(i=0;i<cnt-1;i++)
	{
     ge=a[i]%10;
     shi=(a[i]/10)%10;
     bai=a[i]/100;
     if((ge*ge*ge+shi*shi*shi+bai*bai*bai)==a[i])
	 {printf("yes\n");}
     else
     {printf("no\n");}  
	}
	return 0;
}
