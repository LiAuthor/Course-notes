#include<stdio.h>
int main()
{
	int i;
	int x;
	double sum=0.0;
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		sum+=1.0/i;
	}
	printf("ºÍÎª%f\n",sum);
	return 0;
}
