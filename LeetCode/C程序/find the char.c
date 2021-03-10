#include<stdio.h>
#include<string.h>
#define charone 10
#define chartwe 20
//int seach(int *arrayone[],int *arraytwe[],int lone,int ltwe);
int main()
{
	char s1[charone];
	char s2[chartwe];
	int lengthone,lengthtwe;
	printf("plesse enter string one and twe:\n");
	gets(s1);
	gets(s2);
	puts(s1);
	puts(s2);
	lengthone=strlen(s1);
	lengthtwe=strlen(s2);
	//seach(s1[10],s2[20],lengthone,lengthtwe);
	return 0;
 }
//int seach(int *arrayone[],int *arraytwe[],int lone,int ltwe)

