#include<stdio.h>
#include <math.h>
int main()
{
	float d = 300000, p = 6000, r = 0.01, m;
	m = log10(p / (p - d*r)) / log10(1 + r);
	printf("m=%f\n",m);
	printf("m=%7.3f\n", m);
	/*示例输出
	m=69.660782
	m= 69.661
	*/
	//小数点后数字表示四舍五入后数字精确到小数点后第几位
	//小数点前数字表示控制格式输出共多少位（该数字如果与小数点后数字矛盾，则忽略该数字）
	return 0;
}