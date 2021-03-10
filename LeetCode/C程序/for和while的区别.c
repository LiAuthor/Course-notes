#include<stdio.h>
int main()
{
	int x;
	int i=1;
	int fact=1;
	scanf("%d",&x);
	//while(i<=x){
		//fact*=i;
		//i++;
	//}
	for(i=1;i<=x;i++){
		fact*=i;
	}
	printf("%d",fact);
	return 0;
}
