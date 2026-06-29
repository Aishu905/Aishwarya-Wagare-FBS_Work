#include<stdio.h>
void printTable(int*,int*);
void main()
{
	int n=5;
	int i=1;
	 printTable(&n,&i);
}
void printTable(int*n,int*i)
{
	while(*i<=10)
	{
		printf("5*%d=%d\n",*i,5**i);
		(*i)++;
	}
}