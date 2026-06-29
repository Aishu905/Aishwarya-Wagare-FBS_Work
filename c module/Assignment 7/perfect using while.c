#include<stdio.h>
void perfect(int*,int*,int*);
void main()
{
	int no=33;
	int i=1;
	int sum=0;
	 perfect(&no,&i,&sum);
}
void perfect(int*no,int*i,int*sum)
{
	while(*i<*no)
	{
		if(*no%*i==0)
		{
			*sum=*sum+*i;
		}
		(*i)++;
	}
	if(*sum==*no)
	{
		printf("it is perfect number");
	}
	else
	{
		printf("it is not perfect number");
	}
}