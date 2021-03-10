#include<stdio.h>
int main()
{
	int max(float x,float y);
	float a,b,c;
	
	scanf("%f %f",&a,&b);
	c=max(a,b);//表达式的理解 
	printf("max is %f\n",c);
	return 0;
}
int max(float x,float y)
{
	float z;
	z=x>y?x:y;//表达式的理解 
	return (z);
}
