#include<stdio.h>
void main()
{
	int n=7;
	int i=2;
	while(i<=n)
	{
		if(n%i==0)
		{
			printf("it is not prime number");
			break;
			i++;
		}
		
		else
		{
			printf("it is prime number");
			break;
		}
		i++;
	}
}