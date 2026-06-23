#include<stdio.h>
void main()
{
	int n=100,sum=0;
	
	for( int i=1;i<=n;i++)
	{
		int sum=0;
		for(int j=1;j<=i/2;j++)
		{
			if(i%j==0)
			sum=sum+j;
		}
		if(sum==i)
		printf("%d\n",i);
	}
}
