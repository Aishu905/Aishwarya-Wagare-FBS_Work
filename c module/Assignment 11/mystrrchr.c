#include<stdio.h>
#include<string.h>
char* mystrrchr(char*,char);
void main()
{
	char str[100]="aishwarya";
	char* x=mystrrchr(str,'a');
	printf("%s\n",x);
	if(x!=NULL)
	{
		printf("it is same");
	}
	else
	{
		printf("it is not same");
	}
}
char* mystrrchr(char*str,char ch)
{
	char* ptr;
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		 ptr=str+i;
		i++;
	}
	return ptr;
}