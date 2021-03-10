#include<stdio.h>
int main()
{
	char str1[]="computer";
	char str2[]="compare";
	
	if(strcmp(str1,str2)>0)
	//strcmp(字符串1，字符串2)：将两个字符串自左至右逐个字符比较（按ACKII码值比较大小）
	//直到出现不同的字符或遇到'\0'为止 
	{
		printf("Yes!");
	}
	return 0;
}
