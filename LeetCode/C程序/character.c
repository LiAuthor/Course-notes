#include<stdio.h>
int main()
{
	char c;
	printf("please enter a character\n");
	//scanf("%c",&c);
	//printf("last character is %c\n",c-1);
	//printf("the character is %c\n",c);
	//printf("next character is %c\n",c+1);
	c=getchar();
	putchar(c-1);
	putchar(c);//如何对putchar换行输出 
	putchar(c+1);
	return 0;
}
