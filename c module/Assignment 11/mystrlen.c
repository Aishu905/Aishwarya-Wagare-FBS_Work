#include<stdio.h>
#include<string.h>
int mystrlen(char*);
void main()
{
	char str[100]="aishwarya";
	int len=mystrlen(str);
	printf("length:%d",len);
	
}
int mystrlen(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}