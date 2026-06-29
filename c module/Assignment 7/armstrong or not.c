#include<stdio.h>
void armstrong(int*,int*,int*,int*,int*);
void main()
{
	int no=153;
	int i=1,rem;
	int sum=0;
	int temp=no;
	armstrong(&no,&i,&rem,&sum,&temp);
}
void armstrong(int* no,int* i,int* rem,int* sum,int* temp)
{
	while(*no>0)
	{
		*rem=*no%10;
		*sum=*sum+(*rem**rem**rem);
		*no=*no/10;
	}
	if(*sum==*temp)
		
			printf("it is an armstrong number");
	else
			printf("it is an not armstrong number");
}