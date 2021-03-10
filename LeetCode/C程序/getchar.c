#include<stdio.h>
#include<string.h>
int main()
{
	char ch;
	while((ch=getchar())!=EOF)
	{
		putchar(ch);
	}
	printf("EOF");
	return 0;
} 

