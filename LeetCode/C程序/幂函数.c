#include<stdio.h>
int main()
{
	int pow(int x,int y);
	pow(3,0);
	pow(3,1);
	pow(5,2);
	pow(6,2);
}
int pow(int x,int y)
{
	int i,cnt=1;
	for(i=0;i<y;i++)
	{
		cnt=cnt*x;
	}
	printf("%d\n",cnt);
}
