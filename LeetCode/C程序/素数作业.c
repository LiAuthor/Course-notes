#include <stdio.h>
int prime(int num)
{	
	int i,j=1;
	for(i=2;i<num&&j==1;i++)
	{
		if(num%i==0)
			j = 0;
		else 
			j = 1;	
	}
	return j;
}

int main()
{ 
 int num;
 printf("please enter a number\n");
 scanf("%d",&num);
 if(prime(num))
  printf("%d is a primenumber.\n",num);
 else
 printf("%d is not a primenumber.\n",num);
}

