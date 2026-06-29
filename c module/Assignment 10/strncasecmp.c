#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100];
	char str2[100];
	printf("Enter string 1:");
	scanf("%s",str1);
	printf("Enter string 2:");
	scanf("%s",str2);
	printf("%s\n",str1);
	printf("%s\n",str2);
	int x=strncasecmp(str1,str2,3);
	if(x==0)
	{
		printf("it is same");
	}
	else
	{
		printf("it is not same");
	}
}