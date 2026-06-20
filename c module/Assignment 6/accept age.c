#include<stdio.h>
int CheckAge(int);
void main()
{
		int age=21;
	 int x=CheckAge(age);
	 if(x==1)
	 	printf("Child");
	else if(x==2)
		printf("Teenager");
	else if(x==3)
			printf("Adult");
	else
			printf("Senior");
}
int CheckAge(int age)
{

	if(age<12)
	{
		return 1;
	}
		else if(age>=12&&age<=19)
			{
				return 2;
			}
				else if(age>=20&&age<=57)
					{
						return 3;
					}
						else 
							{
								return 0;
							}
}