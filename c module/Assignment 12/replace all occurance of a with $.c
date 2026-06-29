#include<stdio.h>
#include<string.h>
void main()
{
	char str[100]="aishwarya";
	int i=0;
	printf("Enter string:");
	scanf("%s",str);
	printf("%s\n",str);
	while(str[i]!='\0')
	{
		if(str[i]=='a')
		str[i]='$';
		i++;
	}
	printf("%s",str);
	
}