#include<stdio.h>
#include<string.h>
char* mystrchr(char*,char);
void main()
{
	char str[100]="abc@gmail.com";
	char* x=mystrchr(str,'@');
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
char* mystrchr(char*str,char ch)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		return (str+i);
		i++;
	}
}