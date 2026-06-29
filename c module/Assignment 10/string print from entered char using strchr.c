#include<stdio.h>
#include<string.h>
void main()
{
	char str[100]="apple";
	printf("Enter character:");
	scanf("%s",str);
	printf("%s\n",str);
	char* ptr=strchr(str,'p');
	printf("%s",ptr);
}