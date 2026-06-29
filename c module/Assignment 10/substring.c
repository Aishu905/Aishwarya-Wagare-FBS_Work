#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("enter string:");
	gets(str);
	char* ptr=strstr(str,"c");
	if(*ptr!='\0')
	printf("%s",ptr);
}