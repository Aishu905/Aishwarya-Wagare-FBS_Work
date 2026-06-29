#include<stdio.h>
void uppercaseLowercase(char*);
void main()
{
	char ch;
	printf("Enter character:");
	scanf("%c",&ch);
	 uppercaseLowercase(&ch);
}
void uppercaseLowercase(char* ch)
{
	
	if(*ch>='A' && *ch<='Z')
	{
		printf("Character is Uppercase");
	}
		else
		{
			printf("Character is Lowercase");
		}
}