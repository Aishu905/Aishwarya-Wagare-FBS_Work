#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100];
	char str2[100];
	printf("Enter string 1:");
	scanf("%s",str1);
	printf("Enter string 2:");
	scanf("%s",str2);
	printf("%s\n",str1);
	printf("%s\n",str2);
  int x=strcasecmp(str1,str2);
  if(x==0)
  {
  	 printf("It is same");
  }
  else
  {
  	 printf("It is not same");
  } 
}