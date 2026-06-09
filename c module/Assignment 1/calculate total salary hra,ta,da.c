#include<stdio.h>
void main()
{
	int salary=4000;
	int da ,ta , hra;
	if(salary<=5000)
	{
		da=salary*0.10;
		ta=salary*0.20;
		hra=salary*0.25;
	}
		else
			{
				da=salary*0.15;
				ta=salary*0.25;
				hra=salary*0.30;
			}
			printf("DA=%d\n",da);
			printf("TA=%d\n",ta);
			printf("HRA=%d\n",hra);
}