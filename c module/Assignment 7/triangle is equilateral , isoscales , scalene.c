#include<stdio.h>
void checkTriangle(int*,int*,int*);
void main()
{
	int t1=5,t2=5,t3=9;
	checkTriangle(&t1,&t2,&t3);
}
void checkTriangle(int* t1,int* t2,int* t3)
{
	if(*t1==*t2&&*t2==*t3)
	{
		printf("Triangle is equilateral");
	}
		else if(*t1==*t2||*t2==*t3||*t1==*t3)
		{
				printf("Triangle is isoscales");
		}
		else
		{
				printf("Triangle is scalane");
		}
}