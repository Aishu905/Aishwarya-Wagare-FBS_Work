#include<stdio.h>
void main()
{
	int a=10,b=5,temp;
	temp=a;
	a=b;
	b=temp;
	printf("After swapping: a=%d,b=%d",a,b);
}