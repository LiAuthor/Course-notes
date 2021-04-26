/*
3.输人两个正整数m和n,求其最大公约数和最小公倍数

最大公约数：辗转相除法 
口诀：较大除以较小得余数，当前这一轮中，较大为上一轮较小，较小为上一轮余数，直至余数为0对应的较大为所求

最小公倍数：两数之积除以最小公倍数
*/
#include <stdio.h>
int main()
{
	int  p, r, n, m, temp;
	printf("请输入两个正整数n,m:");
	scanf("%d%d,", &n, &m);
	//调整n保存较大的值
	if (n < m)
	{
		temp = n;
		n = m;
		m = temp;
	}

	p = n * m;
    //辗转相除法
	while (m != 0)
	{
		r = n % m;
		n = m;
		m = r;
	}
	printf("它们的最大公约数为:%d\n", n);
	printf("它们的最小公倍数为:%d\n", p / n);
	return 0;
}