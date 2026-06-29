#include<stdio.h>
#include<string.h>
int mystrcmp(char*,char*);
void main()
{
	char str1[100]="aishwarya";
	char str2[100]="aishwarya";
	int res=mystrcmp(str1,str2);
	if(res==1)
		printf("it is same");
	else
		printf("it is not same");
}
int mystrcmp(char* str1,char* str2)
{
	int i=0;
	while(str1[i]!='\0'&&str2[i]!='\0')
	{
		if(str1[i]==str2[i])
		{
			return 1;
		}
		else
		{
			return 0;
		}
		i++;
	}
	
}