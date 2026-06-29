#include<stdio.h>
#include<string.h>
void main()
{
	char pass[100]="admin123";
	char userpass[100];
	printf("Enter userPass:");
	scanf("%s",userpass);
	printf("%s\n",userpass);
	strcmp(pass,userpass);
	if(strcmp(pass,userpass)==0)
	{
		printf("password correct");
	}
	else
	{
		printf("password incorrect");
	}
}