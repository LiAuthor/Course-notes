#include<stdio.h>
 struct date
{
    int month;
 	int day;
 	int year;
};
 int main(int argc, char const *argv[])
{
 	struct date today;
 	today=(struct date){7,8,1997};
 	struct date day;
 	day=today;
 	
 	printf("Today's date:%i %i %i\n",today.month,today.day,today.year);
 	printf("Day's date:%i %i %i\n",day.month,day.day,day.year);
 	
 	return 0;
}
