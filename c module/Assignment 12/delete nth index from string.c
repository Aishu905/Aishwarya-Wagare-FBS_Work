#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int i=0,n=2;
	printf("Enter string:");
	scanf("%s",str);
	printf("%s\n",str);
	while(str[i]!='\0')
	{
		if(i>=n)
		str[i]=str[i+1];
		i++;
	}
	printf("%s",str);
}