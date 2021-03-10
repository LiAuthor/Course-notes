#include<stdio.h>
int  main()
{
	int x;
	int i=0;
	
	scanf("%d",&x);
	while(x>=1){
		x/=10;
		i++;
	}
	printf("%d",i);
	return 0;
}
