#include<stdio.h>
void sumDigit(int,int,int);
void main()
{
	int i=1;
	int n=5;
	int sum=0;
	 sumDigit(i,n,sum);
}
void sumDigit(int i,int n,int sum)
{
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
}