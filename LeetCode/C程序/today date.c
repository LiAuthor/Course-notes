#include<stdio.h>
int main()
{
	struct date{
		int year;
		int month;
		int day;
	};
	struct date today;
	today.year=2018;
	today.month=04;
	today.day=02;
	printf("today's date:%i-%i-%i",today.year,today.month,today.day);
	return 0;
}
