#include<stdio.h>
void main()
{
	int n=7;
	int i=1;
	int flag=1;
	while(i<=n)
	{
		flag=flag*i;
		i++;
	}
	printf("%d",flag);
}