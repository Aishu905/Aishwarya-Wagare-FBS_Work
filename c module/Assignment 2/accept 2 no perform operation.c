#include<stdio.h>
void main()
{
	int a=12,b=45,ch;
	printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.modulus\n");
	printf("Enter choice:");
	scanf("%d",&ch);
	if(ch==1)
		{
			printf("Addition:%d",a+b);
		}
		else if(ch==2)
			{
				printf("Substraction:%d",a-b);
			}
			else if(ch==3)
				{
					printf("Multiplication:%d",a*b);
				}
				else if(ch==4)
					{
						printf("Division:%d",a/b);
					}
					else if(ch==5)
						{
							printf("Modulus:%d",a%b);
						}
						else
						{
							printf("please enter non zero number");
						}
}