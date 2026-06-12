#include<stdio.h>
void main()
{
	int n=100,sum=0;
	
	for( int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
			printf("%d\n",i);
		}
		
	
	}
	
	
	
	
}