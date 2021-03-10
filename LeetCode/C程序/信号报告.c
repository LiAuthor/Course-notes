#include<stdio.h>
int main()
{
	int a,Strength,Readability;
	printf("请输入信号报告的数字：\n");
	scanf("%d",&a);
	Strength=a/10;
	Readability=a%10;
	switch(Strength)
	{
		case 1:printf("Faint signals, barely perceptible,");
		       break;
		case 2:printf("Very weak signals,");
		       break;
		case 3:printf("Weak signals,");
		       break;
		case 4:printf("Fair signals,");
		       break;
		case 5:printf("Fairly good signals,");
		       break;
		case 6:printf("Good signals,");
		       break;
		case 7:printf("Moderately strong signals,");
		       break;
		case 8:printf("Strong signals,");
		       break;
		case 9:printf("Extremely strong signals,");
		       break;
	}
	switch(Readability)
	{
	    case 1:printf("Unreadable.");
		       break;
	    case 2:printf("Barely readable, occasional words distinguishable.");
		       break;
	    case 3:printf("Readable with considerable difficulty.");
		       break;
	    case 4:printf("Readable with practically no difficulty.");
		       break;
	    case 5:printf("Perfectly readable.");
		       break;	
	}
	return 0;
}
