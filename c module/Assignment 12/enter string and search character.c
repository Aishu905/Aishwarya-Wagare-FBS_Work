#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	char ch;
	int i=0;
	printf("Enter string:");
	scanf("%s",str);
	printf("%s\n",str);
	printf("enter char:");
	fflush(stdin);
	scanf("%c",&ch);
	printf("%c\n",ch);
	int found=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		found=1;
		i++;
	}
	if(found==1)
	{
		printf("it is found");
	}
	else
	{
		printf("it is not found");
	}
}