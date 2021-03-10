#include<stdio.h>
int main()
{
	float Fahrenheit,Celsius;
	printf("please enter Celsius:\n");
	scanf("%f",&Celsius);
	Fahrenheit=1.8*Celsius+32;
	printf("Fahrenheit=%f",Fahrenheit);
	return 0;
}
