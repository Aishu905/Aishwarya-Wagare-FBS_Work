#include<stdio.h>
void eligibleVote(int*);
void main()
{
		int age=30;
    eligibleVote(&age);
}
void eligibleVote(int* age)
{
	if(*age>=18)
		{
				printf("Person is eligible to voting");
		}
			else
			{
					printf("Person is not eligible to voting");
			}
}
