#include<stdio.h>
typedef struct date
{
	int day,month,year;
}date;
void dateInfo(date*,int);
void main()
{
	struct date;
	date arr[5];
	printf("Enter information of date:\n");
	dateInfo(&arr[0],5);
}
void dateInfo(date* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i].day);
		scanf("%d",&arr[i].month);
		scanf("%d",&arr[i].year);
	}
	printf("Your date are:\n");
	for(int i=0;i<size;i++)
	{
		printf("Day:%d\n",arr[i].day);
		printf("Month:%d\n",arr[i].month);
		printf("Year:%d\n",arr[i].year);
	}
}