#include<stdio.h>
int fact(int,int,int);
void main()
{
	int n=4;
	int i=1;
	int flag=1;
	fact(n,i,flag);
	 
}
int fact(int n,int no,int fact)
{
	
	no=4;
	 n=1;
	 fact=1;
	while(n<=no)
	{
		fact=fact*n;
		n++;
	}
	printf("%d",fact);
}