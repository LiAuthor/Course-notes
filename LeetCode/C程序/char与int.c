#include<stdio.h>
int main()
{
	char ac[10]={0,1,2,3,4,5,6,7,8,9};
	//sizeof(char)表示char类型所占字节为1 
	char *p=ac;
	//printf("%lu\n",sizoef(ac)); 
	printf("p=%p\n",p);
	printf("p+1=%p\n",p+1);
	
	int ai[10]={0,1,2,3,4,5,6,7,8,9};
	//sizeof(int)表示int类型所占的字节为4 
	int *q=ai;
	//printf("%lu\n",sizeof(ai));
	printf("p=%p\n",q);
	printf("p+1=%p\n",q+1);
	//问题遗留：如何证明sizeof(char)=1,sizeof(int)=4; 
	
	return 0;
}
