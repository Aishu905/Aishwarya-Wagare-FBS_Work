#include<stdio.h>
void fact(int*,int*,int*);
void main()
{
	int n=7;
	int i=1;
	int flag=1;
	 fact(&n,&i,&flag);
}
void fact(int*n,int*i,int*flag)
{
	while(*i<=*n)
	{
		*flag=*flag**i;
		(*i)++;
	}
	printf("%d",*flag);
}