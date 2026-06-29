#include<stdio.h>
#include<string.h>
char* mystrupr(char* );
void main()
{
	char str[100]="hello";
	char* x=mystrupr(str);
	printf("%s",x);
}
char* mystrupr(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='a'&&str[i]<='z')
		str[i]=str[i]-32;
		
		i++;
	}
	return str;
}