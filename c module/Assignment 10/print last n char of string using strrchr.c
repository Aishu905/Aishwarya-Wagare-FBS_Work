#include<stdio.h>
#include<string.h>
void main()
{
	char str[100]="Aishwarya";
	printf("Enter character:");
	scanf("%s",str);
	printf("%s\n",str);
	char* ptr=strrchr(str,'a');
	printf("%s",ptr);
}