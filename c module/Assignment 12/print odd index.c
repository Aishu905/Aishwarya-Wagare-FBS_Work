#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("Enter string:");
	scanf("%s",str);
	printf("%s\n",str);
	for(int i=0;str[i]!='\0';i++)
	{
		for(int j=i;str[j]!='\0';j++)
		{
			str[j]=str[j+1];
		}
		
	}
	printf("%s",str);
}