#include<stdio.h>
void ToFindSalary(int*,int*,int*,int*);
void FindTa(int*,int*);
void FindHra(int*,int*);
void FindDa(int*,int*);
void main()
{
	int salary=6000;
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
  ToFindSalary(&salary,&da,&ta,&hra);
  FindHra(&salary,&hra);
  FindDa(&salary,&da);
  FindTa(&salary,&ta);
}
void ToFindSalary(int* salary,int* da,int* ta,int* hra)
{
		int total=*salary+*da+*ta+*hra;
		printf("total=%d\n",total);
}
void FindHra(int* salary,int* hra)
{
	printf("HRA=%d\n",*hra);
}
void FindDa(int* salary,int* da)
{
	printf("DA=%d\n",*da);
}
void FindTa(int* salary,int* ta)
{
	printf("TA=%d\n",*ta);
}