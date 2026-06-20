#include<stdio.h>
int findMax(int,int,int);
void main()
{
	int a=90,b=20,c=350;
	int x= findMax(a,b,c);
	if(x==1)
		printf("a is greater");
	else if(x==2)
		printf("b is greater");
	else
		printf("c is greater");
}
int findMax(int a,int b,int c)
{
	if(a>b&&a>c)
	{
		return 1;
	}
	else if(b>c&&b>a)
	{
		return 2;
	}
	else
	{
		return 0;
	}
}