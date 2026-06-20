#include<stdio.h>
void digitSum(int,int,int,int);
void main()
{
	int no=52343;
	int sum=0,rem,i=1;
	 digitSum(no,sum,rem,i);
}
void digitSum(int no,int sum,int rem,int i)
{
	no=52343;
	sum=0,rem,i=1;
	int temp=no;
	while(temp>0)
	{
		rem=no%10;
		sum=temp+rem;
		temp=temp/10;
	    i++;
	} 
	printf("%d",sum);
}