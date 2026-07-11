#include<stdio.h>
struct Date
{
	int day,month,year;	
};
void main()
{
	struct Date d1,d2;
	printf("Enter day 1:\n");
	d1.day=25;
	d1.month=2;
	d1.year=2025;
	printf("DAY:%d\n",d1.day);
	printf("MONTH:%d\n",d1.month);
	printf("YEAR:%d\n",d1.year);
	printf("Enter day 2:\n");
	scanf("%d",&d2.day);
	scanf("%d",&d2.month);
	scanf("%d",&d2.year);
	printf("DAY:%d\n",d2.day);
	printf("MONTH:%d\n",d2.month);
	printf("YEAR:%d\n",d2.year);
}