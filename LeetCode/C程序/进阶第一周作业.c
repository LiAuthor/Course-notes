#include<stdio.h>

int main()
{
	int molecule,denominator;
	int sum=0,n=0,i;
	int number[200]={0};
	scanf("%d/%d",&molecule,&denominator);
	printf("0.");
	if(molecule>=10&&molecule<denominator&&denominator<100){
		for(i=0;i<200;i++){
			molecule*=10;
			sum=molecule/denominator;
			number[i]=sum;
			molecule%=denominator;
			n=i;
			if (molecule==0)
			{
				n=i;
				break;
			}
		}
	}
	for(i=0;i<=n;i++){
		printf("%d",number[i] );
	}
	printf("\n");
	return 0;
}
