#include<stdio.h>
void armstrongRange(int,int,int,int);
void main()
{
	int sum,no=200,temp,rem;
	 armstrongRange(sum,no,temp,rem);
}
void armstrongRange(int sum,int no,int temp,int rem)
{
	for(int i=1;i<=no;i++)
	{
		temp=i;
		sum=0;
		while(temp>0)
		{
			rem=temp%10;
			sum=sum+(rem*rem*rem);
			temp=temp/10;
		}
	
		if(sum==i)
		printf("%d\n",i);
	}
}