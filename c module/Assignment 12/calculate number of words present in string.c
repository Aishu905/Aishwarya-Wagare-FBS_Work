#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("Enter string:");
	scanf("%s",str);
	printf("%s\n",str);
	int i=0,count=0;
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	printf("number of words:%d",count);
}