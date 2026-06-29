#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("Enter string:");
	scanf("%s",str);
	printf("%s\n",str);
	int len=strlen(str);
	printf("length:%d\n",len);
	int i=0,j=len-1;
	while(str[i]!='\0'&&str[j]!='\0')
	{
		if(str[i]==str[j])
		{
			i++;
			j--;
		}
		break;
	}
	if(str[i]==str[j])
	{
		printf("it is palindrome");
	}
	else
	{
		printf("it is not palindrome");
	}
}