#include<stdio.h>
int perfect(int,int,int);
void main()
{
	int no=29;
	int i=1;
	int sum=0;
	int x= perfect(no,i,sum);
	if(x==1)
		printf("it is perfect number");
	else
	 	printf("it is not perfect number");
}
int perfect(int no,int i,int sum)
{
	while(i<no)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum==no)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}