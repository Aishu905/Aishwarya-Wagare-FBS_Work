#include<stdio.h>
void sumDigit(int*,int*,int*,int*);
void main()
{
	int no=52345;
	int sum=0,rem,i=1;
	 sumDigit(&no,&sum,&rem,&i);
}
void sumDigit(int*no,int*sum,int*rem,int*i)
{
	while(*no>0)
	{
		*rem=*no%10;
		*sum=*no+*rem;
		*no=*no/10;
	    (*i)++;
	}
	printf("%d",*sum);
}