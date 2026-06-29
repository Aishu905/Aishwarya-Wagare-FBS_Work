#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100];
	char str2[100];
	printf("Enter string1:");
	scanf("%s",str1);
	printf("%s\n",str1);
	printf("Enter string2:");
	scanf("%s",str2);
	printf("%s\n",str2);
	int i=0;
	while(str1[i]!='\0'&&str2[i]!='\0')
	{
		if(str1[i]>str2[i])
		{
			printf("largest:%s",str1);
			break;
		}
		else if(str1[i]<str2[i])
		{
			printf("largest:%s",str2);
			break;
		}
		else if(str1[i]==str2[i])
		{
			printf("Both string are equal:%s%s",str1,str2);
			break;
		}
		i++;
	}
}