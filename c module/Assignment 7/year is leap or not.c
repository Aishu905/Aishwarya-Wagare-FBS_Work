#include<stdio.h>
void YearLeapOrNot(int*);
void main()
{
	int yr=2025;
	 YearLeapOrNot(&yr);
}
void YearLeapOrNot(int* yr)
{
		
	if(*yr%4==0)
	{
			printf("Year is leap");
	}
		else
			{
					printf("Year is not leap");
			}
}