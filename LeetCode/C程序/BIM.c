#include<stdio.h>
//#include<math.h> 
int main()
{
	float weight,height,BIM;
	printf(" please enter weight and height:\n");
	scanf("%f %f",&weight,&height);
	BIM=weight/(height*height);
	//BIM=pow(height,2);//使用方法 
	printf("BIM=%f",BIM);
	return 0;
}
