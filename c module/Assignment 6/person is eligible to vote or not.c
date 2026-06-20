#include<stdio.h>
int eligibleVote(int);
void main()
{
		int age=30;
    int x=eligibleVote(age);
    if(x==1)
    	printf("Person is eligible to voting");
    else
    	printf("Person is non-eligible to voting");
}
int eligibleVote(int age)
{
	if(age>=18)
		{
			return 1;
		}
			else
			{
				return 0;
			}
}
