#include<stdio.h>
int main()
{
	char c[15]={'I',' ','a','m',' ','a',' ','s','t','u','d','e','n','t'};
	int i;
	for(i=0;i<15;i++)
	{
		printf("%c",c[i]);//格式符%c输入或输出一个字符 
	}
	printf("\n");
	
	char b[]={"China"};//格式符%s输入或输出字符串 
	printf("%s\n",b);//输出的字符不包括结束符\0 
	
	return 0;
}
