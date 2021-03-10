#include<stdio.h>
int main()
{
	int a;
	a=2;
	int b[5];
	printf("%lu\n",sizeof(b));//b所占的字节 
	printf("%lu\n",sizeof(b[0]));//b的第一个单元有多大 
	printf("%lu\n",sizeof(b)/sizeof(b[0]));//得到的数组有多少个元素 
	printf("%p\n",a);//a的地址 
	printf("0x%x\n",a);//a的地址 
	if(&b==b&&b==&b[0])//&代表指针，三者的地址相同 
	{
		printf("YES!");
	}
	return 0;
}
