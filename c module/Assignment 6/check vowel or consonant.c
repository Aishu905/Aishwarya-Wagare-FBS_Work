#include<stdio.h>
char vowelConsonant(char);
void main()
{
		char ch;
	printf("Enter character:");
	scanf("%c",&ch);
	 char x=vowelConsonant(ch);
	 if(x==1)
	 	printf("it is vowel");
	 	else
	 	printf("it is consonant");
	 	
	 
}
char vowelConsonant(char ch)
{
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		{
			return 1;
		}
		else
			{
				return 0;
			}
}