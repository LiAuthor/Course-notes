#include<stdio.h>
#include <math.h>
int main()
{
	float p, r;
	r = 0.07;
	p = pow(1 + r, 10);
	printf("p=%f\n", p);
	return 0;
}