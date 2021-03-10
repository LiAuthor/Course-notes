#include<stdio.h>
int main()
{
	char c[7]={'a','d','c','e','f','\0'};
	if(c[1]<c[4]){
		printf("Yes!\n");
		printf("c[4]=%c\n",c[4]);
	}
	char str1[10]={"we are "};
	char str2[]={"friends"};
	printf("%s",strcat(str1,str2));
	return 0;
}
