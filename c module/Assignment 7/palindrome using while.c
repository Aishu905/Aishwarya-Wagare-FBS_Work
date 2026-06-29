#include<stdio.h>
void palindrome(int*,int*,int*,int*,int*);
void main()
{
	int n=121;
	int temp=n,rem,rev=0,i=1;
	 palindrome(&n,&temp,&rem,&rev,&i);
}
void palindrome(int*n,int*temp,int*rem,int*rev,int*i)
{
	while(*n>0)
	{
		*rem=*n%10;
		*rev=*rev*10+*rem;
		*n=*n/10;
		(*i)++;
	}
	if(*rev==*temp)
		printf("it is palindrome");
	else
		printf("it is not palindrome");
}