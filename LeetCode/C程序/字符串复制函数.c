#include<stdio.h>
int main()
{
	char str1[15],str2[]="I am student.";
	char str3[10];
	strcpy(str1,str2);
	//strcpy(字符数组1,字符串2)表示字符串复制函数,将字符串2复制到字符数组1中去 
	printf("%s\n",str1);
	
	strncpy(str3,str2,6);
	//strncpy(字符数组1,字符串2,复制字符个数) 表示将字符串2的前n个字符复制到字符数组1中去 
	printf("%s\n",str3);
	return 0;
}
