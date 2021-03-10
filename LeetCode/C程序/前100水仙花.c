#include<stdio.h>
int main()
{
	int ge,shi,bai;
	int i;
	
	for(i=1;i<1000;i++)
	{
     ge=i%10;
     shi=(i/10)%10;
     bai=i/100;
     if((ge*ge*ge+shi*shi*shi+bai*bai*bai)==i)
	 {
	  printf("%d\n",i);
	 }
	}
	return 0;
}
