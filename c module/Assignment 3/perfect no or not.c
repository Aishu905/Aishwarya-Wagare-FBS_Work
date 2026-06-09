#include<stdio.h>
void main()
{
	int no=28;
	int i=1;
	int sum=0;
	while(i<=no)
	{
		if(i%no==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum==no)
	{
		printf("it is perfect number");
	}
	else
	{
		printf("it is not perfect number");
	}
}