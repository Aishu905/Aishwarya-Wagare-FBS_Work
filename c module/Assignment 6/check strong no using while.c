#include<stdio.h>
int strong(int,int,int,int);
void main()
{
	int no=135;
	int temp=no,rem,sum=0;
	int x= strong(no,temp,rem,sum);
	if(x==1)
		printf("it is strong number");
	else
		printf("it is not strong number");
}
int strong(int no,int temp,int rem,int sum)
{
	while(no>0)
	{
		rem=no%10;
		int fact=1;
		while(rem>0)
		{
			fact=fact*rem;
			rem--;
		}
		sum=sum+fact;
		no=no/10;
	}
	if(sum==temp)
		return 1;
	else
		return 0;
}