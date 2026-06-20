#include<stdio.h>
int checkGrade(int);
void main()
{
	int marks;
	printf("Enter marks:");
	scanf("%d",&marks);
	int x= checkGrade(marks);
	if(x==1)
		printf("Distinction");
	else if(x==2)
		printf("First class");
	else if(x==3)
			printf("Second class");
	else if(x==4)
			printf("Pass class");
	else
			printf("Fail");
}
int checkGrade(int marks)
{
	
	if(marks>=75)
		{
			return 1;
		}
		else if(marks>=65)
			{
				return 2;
			}
				else if(marks>=55)
					{
						return 3;
					}
						else if(marks>=40)
							{
								return 4;
							}
								else
									{
										return 0;
									}
}