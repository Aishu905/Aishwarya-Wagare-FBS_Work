#include<stdio.h>
void main()
{
	int ch;
	printf("Enter character:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		{
			printf("It is Vowel");
		}
		else
			{
				printf("It is Consonant");
			}
}