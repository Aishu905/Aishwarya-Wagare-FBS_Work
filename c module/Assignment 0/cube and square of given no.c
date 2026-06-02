#include<stdio.h>
void main()
{
	int num,square,cube;
	printf("Enter number:");
	scanf("%d",&num);
	square=num*num;
	cube=num*num*num;
	printf("Square of %d=%d\n",num,square);
	printf("Cube of %d=%d\n",num,cube);
	
}