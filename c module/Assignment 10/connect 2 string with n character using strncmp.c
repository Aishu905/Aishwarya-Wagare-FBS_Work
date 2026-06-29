#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100]="kolhapur";
	char str2[100]="aishwaryaaaa";
	printf("Enter character for string 1:");
	scanf("%s",str1);
	printf("Enter character for string 2:");
	scanf("%s",str2);
	printf("%s\n",str1);
	printf("%s\n",str2);
	strcat(str1," ");
	strncat(str1,str2,3);
	printf("%s",str1);
	
}