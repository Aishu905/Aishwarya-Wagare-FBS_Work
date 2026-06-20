#include<stdio.h>
void printPrime(int);
void main()
{
	int no=100;
	 printPrime(no);
}
void printPrime(int no)
{
	for(int i=2;i<=no;i++)
	{
    	int	count=0;
		for( int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
			 
		}
		if(count==2)
			{
				printf("%d\n",i);
			}
	}
}