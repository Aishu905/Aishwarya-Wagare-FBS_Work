#include<stdio.h>
void main()
{
	int ch;
	printf("Enter character:");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		printf("Character is Uppercase");
	}
		else
		{
			printf("Character is Lowercase");
		}
}