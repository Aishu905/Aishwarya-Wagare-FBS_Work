#include<stdio.h>
#include<string.h>
char* mystrcat(char*,char*);
void main()
{
	char str1[100]="hello";
	char str2[100]="world";
	char*ptr=mystrcat(str1,str2);
	printf("%s",ptr);
	
}
char* mystrcat(char*str1,char*str2)
{
	int i=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	int j=0;
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
	return str1;
}