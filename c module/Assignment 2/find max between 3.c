#include<stdio.h>
void main()
{
	int a=90,b=200,c=30;
	if(a>b&&a>c)
	{
		printf("a is greater");
	}
	else if(b>c&&b>a)
	{
		printf("b is greater");
	}
	else
	{
		printf("c is greater");
	}
}