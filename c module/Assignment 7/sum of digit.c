#include<stdio.h>
void sumOfDigit(int*,int*,int*);
void main()
{
	int i=1,n=5,sum=0;
	 sumOfDigit(&i,&n,&sum);
}
void sumOfDigit(int*i,int*n,int*sum)
{
	while(*i<=*n)
	{
		*sum=*sum+(*i);
		(*i)++;
	}
	printf("%d",*sum);
}