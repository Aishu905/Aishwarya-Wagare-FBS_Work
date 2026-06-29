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
		int temp=str[0];
		str[0]=str[len-1];
		str[len-1]=temp;
	printf("%s",str);
}