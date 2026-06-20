#include<stdio.h>
int palindrome(int,int,int,int,int);
void main()
{
	int no=525;
	int r1,r2,r3,q1;
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	r3=q1/10;
	int x=palindrome(no,r1,r2,r3,q1);
	if(x==1)
		printf("Number is palindrome");	
			else
				printf("Number is non-palindrome");
}	
int palindrome(int no,int r1,int r2,int r3,int q1)
{

	int rev=r1*100+r2*10+r3;
	if(no==rev)
	{
			return 1;	
	}
		else
			{
				return 0;
			}
}