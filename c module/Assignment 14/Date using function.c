#include<stdio.h>
typedef struct Date
{
	int day,month,year;
}Date;
Date scanDate();
void displayDate(Date );

void main()
{
	Date d1,d2;
	printf("Enter Date 1 details:\n");
	d1=scanDate();
	printf("Enter Date 2 details:\n");
	d2=scanDate();
	printf("Date 1 details are:\n");
	displayDate(d1);
	printf("Date 2 details are:\n");
	displayDate(d2);
}
Date scanDate()
{
	Date temp;
	scanf("%d",&temp.day);
	scanf("%d",&temp.month);
	scanf("%d",&temp.year);
	return temp;
}
void displayDate(Date d)
{
	printf("Day:%d\n  Month:%d\n  Year:%d\n",d.day,d.month,d.year);
}