#include<stdio.h>
void main()
{
	int no=526;
	int r1,r2,r3,q1;
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	r3=q1/10;
	int rev=r1*100+r2*10+r3;
	if(no==rev)
	{
			printf("Number is palindrome");		
	}
		else
			{
				printf("Number is non-palindrome");
			}
}	