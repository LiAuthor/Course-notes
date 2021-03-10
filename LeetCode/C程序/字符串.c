#include<stdio.h>
int main()
{
	char MaxChar(char str[10]);//声明函数 
	
	char str1[10];//定义字符串 
	char str2[10];
	
	gets(str1);//输入字符串函数 
	gets(str2);
	
	if(strcmp(str1,str2)>0)//字符串比较函数 
	printf("Yes!\n");//如果str1大于str2，输出yes 
	
	printf("%s\n",strcat(str1,str2));//字符串连接函数 
	
	MaxChar(str1);//调用函数 
	MaxChar(str2);
//	int MaxChar=str1[0];
//	int i;
//	for(i=0;i<10;i++){
//		if(str1[i]>str1[0]){
//			MaxChar=str1[i];
//		}
//	} 
//	printf("MaxChar=%c",MaxChar);
	
	return 0;
}
char MaxChar(char str[10])
{
	int max=str[0];
	int i;
	for(i=0;i<10;i++){
		if(str[i]>str[0]){
			max=str[i];
		}
	}
	printf("MaxChar=%c\n",max);
}
