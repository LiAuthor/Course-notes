#include<stdio.h>
int main()
{
	int f1=1,f2=1,f3;
	printf("%d\n%d\n",f1,f2);
	int i;
	for(i=1;i<38;i++)
	{
		f3=f1+f2;
		printf("%d\n",f3);
		f1=f2;
		f2=f3;
	}
	return 0;
}
