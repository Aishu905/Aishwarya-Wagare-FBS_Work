#include<stdio.h>
#include<string.h>
char* mystrrev(char*);
void main()
{
	char str[100]="hello";
	char* x=mystrrev(str);
	printf("%s",x);
}
char* mystrrev(char* str)
{
	int i=0,j;
	char temp;
	while(str[i]!='\0')
	{
		i++;
	}
	j=i-1;
	i=0;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	return str;
}