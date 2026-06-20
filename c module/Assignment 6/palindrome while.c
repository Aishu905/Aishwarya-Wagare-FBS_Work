#include<stdio.h>
int palindrome(int,int,int,int,int);
void main()
{
	int n=121;
	int temp=n,rem,rev=0,i=1;
	int x= palindrome(n,temp,rem,rev,i);
	if(x==1)
		printf("it is palindrome");
	else
		printf("it is not palindrome");
}
int palindrome(int n,int temp,int rem,int rev,int i)
{
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		i++;
	}
	if(rev==temp)
		return 1;
	else
		return 0;
}