#include<stdio.h>
void main()
{
	int no=145;
	int temp=no,rem,sum=0;
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
		printf("it is strong number");
	else
		printf("it is not strong number");
}