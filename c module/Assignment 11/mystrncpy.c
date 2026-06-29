#include<stdio.h>
#include<string.h>
char* mystrncpy(char*,char*,int );
void main()
{
	char str1[100]="";
	char str2[100]="world";
	 char* x=mystrncpy(str1,str2,2);
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
char* mystrncpy(char*dest,char*src,int n)
{
	int i=0;
	while(src[i]!='\0'&&i<n)
	{
		dest[i]=src[i];
		
		i++;
	}
	dest[i]='\0';
	return dest;
}