#include<stdio.h>
int main()
{
	int a=123,b=12,c=1234,d=12345;
	printf("%5d\n",a);//数字5的含义： 
	printf("%5d\n",b);
	printf("%5d\n",c); 
	printf("%5d\n",d); 
	return 0;
}
//表示按5位的固定位宽输出整型数值。如果不足5位，则在前面补空格；超过5位，则按实际位数输出。 
