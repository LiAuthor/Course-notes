#include<stdio.h>
int main()
{
	int number;
	int count=0;
	int sum=0;
	
	scanf("%d",&number);
	
	while(number!=-1){
		sum+=number;
		count++;
		scanf("%d",&number);
	}
	printf("平均数是%f\n",1.0*sum/count);
	
	return 0;
} 
