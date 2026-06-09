#include<stdio.h>
void main()
{
	int no=12345;
	int sum=0,rem,i=1;
	while(no>0)
	{
		rem=no%10;
		sum=i+rem;
		no=no/10;
	    i++;
	}
	printf("%d",sum);
}