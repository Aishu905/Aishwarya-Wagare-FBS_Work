#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("Enter string:");
	gets(str);
	printf("%s\n",str);
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		str[i]='@';
		i++;
	}
	printf("%s",str);
}