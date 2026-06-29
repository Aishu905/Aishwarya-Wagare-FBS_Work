#include<stdio.h>
void CheckAge(int*);
void main()
{
		int age=10;
	 CheckAge(&age);
}
void CheckAge(int* age)
{

	if(*age<12)
	{
			printf("Child");
	}
		else if(*age>=12&&*age<=19)
			{
				printf("Teenager");
			}
				else if(*age>=20&&*age<=57)
					{
						printf("Adult");
					}
						else 
							{
								printf("Senior");
							}
}