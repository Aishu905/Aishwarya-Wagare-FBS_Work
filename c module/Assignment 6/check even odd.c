#include<stdio.h>
int checkEvenOdd(int);
void main()
{
	int no=19;
   int x= checkEvenOdd(no);
   if(x==1)
   		printf("Number is even");
   	else
   		printf("Number is odd");
		
}
int checkEvenOdd(int no)
{
	
	if(no%2==0)
		{
		       return 1;
		}
		else
			{
				return 0;
			}
}