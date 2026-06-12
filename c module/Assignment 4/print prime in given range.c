#include<stdio.h>
void main()
{
	int no=100;
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