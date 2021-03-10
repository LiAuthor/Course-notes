#include<stdio.h>
int main(void)
{
	int x;
	const int number=10;
	int count [number];
	int i;
	scanf("%d",&x);
	for(i=0;i<number;i++){
		count[i]=0;
	}
	while(x!=-1){
		if(x>=1&&x<=9){
		count[x]++;	
		}
		scanf("%d",&x);
	}
	for(i=0;i<number;i++){
		printf("%d³öÏÖ%d´Î\n",i,count[i]);
	}
	return 0;
}
