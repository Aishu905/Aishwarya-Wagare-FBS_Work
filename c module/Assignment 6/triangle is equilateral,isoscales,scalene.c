#include<stdio.h>
int checkTriangle(int,int,int);
void main()
{
	int t1=5,t2=2,t3=9;
	int x=checkTriangle(t1,t2,t3);
	if(x==1)
		printf("Triangle is equilateral");
	else if(x==2)
		printf("Triangle is isoscales");
	else
		printf("Triangle is scalane");
}
int checkTriangle(int t1,int t2,int t3)
{
	if(t1==t2&&t2==t3)
	{
		return 1;
	}
		else if(t1==t2||t2==t3||t1==t3)
		{
				return 2;
		}
		else
		{
			return 0;
		}
}