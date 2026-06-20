#include<stdio.h>
void mul(int,int);
void main()
{	
	int n=5;
	int i=1;
	 mul(n,i);
}
void mul(int n,int i)
{
	while(i<=10)
	{
		printf("5*%d=%d\n",i,5*i);
		i++;
	}
}