#include<stdio.h>
char uppercaseLowercase(char);
void main()
{
	char ch;
	printf("Enter character:");
	scanf("%c",&ch);
	 char x=uppercaseLowercase(ch);
	 if(x==1)
	 	printf("Character is Uppercase");
	else
		printf("Character is Lowercase");
}
char uppercaseLowercase(char ch)
{
	
	if(ch>='A' && ch<='Z')
	{
		return 1;
	}
		else
		{
			return 0;
		}
}