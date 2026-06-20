#include<stdio.h>
int division(int);
void main()
{
	int no=30;
	int x=division(no);
	if(x==1)
		printf("Divisible by both");
	else if(x==2)
		printf("Divisible by 5 but not by 3");
	else if(x==3)
		printf("Divisible by 3 but not by 5");
	else
		printf("None divisible");
}
int division(int no)
{
	
	if(no%3==0 && no%5==0)
	{
		return 1;
	}
		else if (no%5==0)
			{
				return 2;
			}
				else if(no%3==0 )
					{
						return 3;
					}
						else
							{
								return 0;
							}
}