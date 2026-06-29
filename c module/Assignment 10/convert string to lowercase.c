#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("Enter string:");
	scanf("%s",str);
	printf("%s\n",str);
	char* ptr=strlwr(str);
	printf("%s",ptr);
}