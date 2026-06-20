#include<stdio.h>
void printNo(int);
void main()
{
	int i=1;
	 printNo(i);
}
void printNo(int i)
{
	while(i<=10)
	{
		printf("%d\n",i);
		i++;
	}
}