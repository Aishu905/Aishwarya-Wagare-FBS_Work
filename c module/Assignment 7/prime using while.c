#include<stdio.h>
void prime(int*,int*);
void main()
{
	int n=4;
	int i=2;
	 prime(&n,&i);
}
void prime(int*n,int*i)
{
	
	while(*i<=*n)
	{
		if(*n%*i==0)
		{
			printf("it is not prime number");
			break;
			(*i)++;
		}
		
		else
		{
			printf("it is prime number");
			break;
		}
		(*i)++;
	}
}