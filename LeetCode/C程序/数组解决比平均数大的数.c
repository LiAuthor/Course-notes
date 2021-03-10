#include<stdio.h>
int main()
{
	int x;
	int cnt=0;
	double sum;
	int number[100];
	scanf("%d",&x);
	while(x!=-1){
		number[cnt]=x;
		sum+=x;
		cnt++;
		scanf("%d",&x);
	}
	if(cnt>0){
		double average;
		average=sum/cnt;
		printf("平均数是：%f\n",average);
		printf("比平均数大的数为：\n");
		int i;
		for(i=1;i<cnt;i++){
			if(number[i]>average){
				printf(" %d",number[i]);
			}
		}
	}
	return 0;
}
