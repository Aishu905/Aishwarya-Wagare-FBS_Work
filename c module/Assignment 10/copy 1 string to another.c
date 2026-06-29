#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100]="Aishwarya";
	char str2[100];
	printf("Enter character:");
	scanf("%s",str1);
	printf("%s\n",str1);
	strcpy(str2,str1);
	printf("%s",str2);
}