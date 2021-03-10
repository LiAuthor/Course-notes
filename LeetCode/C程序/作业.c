#include <stdio.h>
int main()
{
	int two(double a, double b, double c);
	int one(double a, double b,double c);
	int zero();												
	int a,b,c;
	double compare;
	scanf("%d %d %d",&a,&b,&c);
	compare=b*b-4.0*a*c;
	if(compare>0)
		two(a,b,c);
	
	else if(compare==0)
		one(a,b,c);
		
	else if(compare<0)
		zero();											
}


int two(double a, double b, double c)
{
					
	double x1,x2,compare;
	compare=b*b-4*a*c;
	x1=(-b+compare)/(2.0*a);
	x2=(-b-compare)/(2.0*a);
	printf("this equetion has two root:x1=%.3lf,x2=%.3lf\n",x1+0.0005,x2+0.0005);
}


int one(double a, double b, double c)
{
												
	double x;
	x=-b/2.0*a;
	printf("this equetion has only one root:x=%.3lf\n",x+0.0005);
}


int zero()
{
	
	printf("this equetion hasn't root!\n");	
}			

