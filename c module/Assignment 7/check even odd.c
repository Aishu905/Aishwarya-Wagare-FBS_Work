#include<stdio.h>
void checkEvenOdd(int*);
void main()
{
	int no=19;
   checkEvenOdd(&no);
}
void checkEvenOdd(int* no)
{
	
	if(*no%2==0)
		{
		       printf("Number is even");
		}
		else
			{
		    	printf("Number is odd");
			}
}