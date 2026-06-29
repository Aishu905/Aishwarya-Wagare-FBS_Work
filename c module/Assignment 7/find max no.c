#include<stdio.h>
void findMax(int*,int*,int*);
void main()
{
	int a=90,b=20,c=350;
	 findMax(&a,&b,&c);
}
void findMax(int* a,int* b,int* c)
{
	if(*a>*b&&*a>*c)
	{
		printf("a is greater");
	}
	else if(*b>*c&&*b>*a)
	{
		printf("b is greater");
	}
	else
	{
		printf("c is greater");
	}
}