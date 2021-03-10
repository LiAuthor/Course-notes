#include<stdio.h>
int main(void)
{
	int i=0;
	int p;
	p=(int)&i;//强制转换      //去掉(int)仍可得到相同结果  一个warning 
	printf("0x%p\n",p);
	printf("%p\n",&i);//%p地址
	printf("%lu\n",sizeof(int));//输出类型int的字节数   64位构架int为4  &i为8     ？ 
	printf("%lu\n",sizeof(&i));//输出&i的字节数      32位构架类型int与&i字节数相等 
	return 0;
}
