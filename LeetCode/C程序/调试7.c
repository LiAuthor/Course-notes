#include<stdio.h>
int main()
{
	char word1[8];//[8]代表八个数组 ，最多接受7个字符，还有0结尾 
	char word2[8];
	scanf("%7s",word1);//7的作用：该行只读7个字符，多的读入下一个scanf 
	scanf("%7s",word2);
	printf("%s##%s##\n",word1,word2);
	return 0;
}

//     %s作用：读单词，以空格键，回车键为标准 
