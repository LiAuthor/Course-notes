#include<stdio.h>
int main()
{
	int type,money;
	
	printf("1:一次性存五年期。\n");
	printf("2:先存2年期，到期后将本息再存3年。\n");
	printf("3:先存3年期，到期后将本息再存2年。\n");
	printf("4:存一年期，到期后将本息再存1年期，连续存5次。\n");
	printf("5:存活期存款。\n");
	printf("请选择存款类型:\n");
	scanf("%d",&type);
	printf("请输入存款金额：\n");
	scanf("%d",&money);
	float r4,r3,r2,r1,r5;
    r4=0.0585;
    r3=0.0540;
    r2=0.0468;
    r1=0.0414;
    r5=0.0072;
	
	switch(type)
	{
	case 1:
	printf("存款利息为%f",money*r1*5);
	break;
	case 2:
	printf("存款利息为%f",money*(1+2*r2)*r3*3);
	break;
	case 3:
	printf("存款利息为%f",money*(1+3*r3)*r2*2);
	break;
	case 4:
	printf("存款利息为%f",money*(1+r1)*(1+r1)*(1+r1)*(1+r1)*(1+r1)-money);
	break;
	case 5:
	printf("存款利息为%f",money*r5*20);
	break;
	default:
	printf("请重新选择。");
	break; 
	}
	
	return 0;
}
