#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100];
	char str2[100];
	printf("Enter string1:");
	scanf("%s",str1);
	printf("Enter string2:");
	scanf("%s",str2);
	printf("%s\n",str1);
	printf("%s\n",str2);
	char*ptr=strncat(str1,str2,3);
	printf("%s\n",ptr);
}