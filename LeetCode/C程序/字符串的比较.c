#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10];
	gets(a);
	gets(b);
	puts(a);
	puts(b);
	if(strcmp(a,b)==0)
	printf("OK");
	else printf("No");
	return 0;
}
