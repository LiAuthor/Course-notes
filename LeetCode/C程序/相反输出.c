#include<stdio.h>
int main()
{
	//void main(int A[],B[]);
	int i,a[10],b[10];
	printf("the original array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		b[9-i]=a[i];
	}
	printf("the array has been inverted:\n");
	for(i=0;i<10;i++)
	{
		printf("%3d",b[i]);                                    
	}
	return 0;
} 
