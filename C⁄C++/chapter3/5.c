#include<stdio.h>
int main()
{
	int a, b;
	float x, y;
	char c1, c2;
	scanf("a=%db=%d", &a, &b);
	scanf("%f%e",&x, &y);
	scanf("%c%c",&c1, &c2);
/*
>>>
a=3b=7 8.5 7.182e+1Aa
>>>
a=3,b=7
x=8.500000,y=7.182000e+01
c1=A,c2=a
此题主要考察格式化输入，整形输入a和b时，必须按照a=3b=7的格式输入
浮点数输入时，%e代表科学记数法输入，字符输入c1和c2时，中间不能有任何空格
*/
    printf("a=%d,b=%d\n",a,b);
    printf("x=%f,y=%e\n",x,y);
    printf("c1=%c,c2=%c\n",c1,c2);
	return 0;
}