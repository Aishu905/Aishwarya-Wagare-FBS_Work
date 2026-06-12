#include<stdio.h>
void main()
{
	for(int i=1;i<=5;i++)
	{
		for(int space=1;space<=i-1;space++)
		{
			printf(" ");
		}
		for(int star=1;star<=6-i;star++)
		{
			printf("* ");
		}
		printf("\n");
	}
}