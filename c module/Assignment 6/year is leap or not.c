#include<stdio.h>
int YearLeapOrNot(int);
void main()
{
	int yr=2025;
	 int x=YearLeapOrNot(yr);
	if(x==1)
			printf("Year is leap");
	else
			printf("Year is not leap");
}
int YearLeapOrNot(int yr)
{
		
	if(yr%4==0)
	{
		return 1;
	}
		else
			{
				return 0;
			}
}