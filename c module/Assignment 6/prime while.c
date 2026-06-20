#include<stdio.h>
int prime(int ,int);
void main()
{
	int n=21;
	int i=2;
	int x= prime(n,i);
	if(x==1)
			printf("it is not prime number");
	else
			printf("it is prime number");
}
int prime(int n,int i)
{
	while(i<=n)
	{
		if(n%i==0)
		{
			return 1;
			break;
			i++;
		}
		
		else
		{
			return 0;
			break;
		}
		i++;
	}
}