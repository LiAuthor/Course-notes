#include<stdio.h>
int main()
{
	double totalscore=0,averagescore=0;
	int Max=0,Min=0;
	int a[4]={0};
	int i,b,t;
	
	printf("please enter Math scores:\n");
	scanf("%d",&a[0]);
	printf("please enter Physics scores:\n");
	scanf("%d",&a[1]);
	printf("please enter English scores:\n");
	scanf("%d",&a[2]);
	printf("please enter Politics scores:\n");
	scanf("%d",&a[3]);
	
		for(i=0;i<4;i++)
	{
		totalscore+=a[i];
	}	
	averagescore=(totalscore/4);
	
	for(t=0;t<3;t++)
	{
		for(i=0;i<3-t;i++)
	   {
		    if(a[i+1]<a[i])
		  {
			b=a[i];
			a[i]=a[i+1];
			a[i+1]=b;
		  }
	   }
	}
	Max=a[3];
	Min=a[0];

	printf("Max=%d\n",Max);
	printf("Min=%d\n",Min);
	printf("averagescore=%.2lf\n",averagescore);
	printf("totalscore=%.2lf\n",totalscore);
	
	return 0;
}         
