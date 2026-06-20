#include<stdio.h>
void perfect(int,int);
void main()
{
	int n=100,sum=0;
	 perfect(n,sum);	
}
void perfect(int n,int sum)
{	
	for( int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
			printf("%d\n",i);
		}
	}
}