#include<stdio.h>
int ToFindSalary(int,int,int,int);
int FindTa(int,int);
int FindHra(int,int);
int FindDa(int,int);
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
  int x=ToFindSalary(salary,da,ta,hra);
  	printf("total=%d\n",x);
 		int y=FindTa(salary,ta);
 				printf("TA=%d\n",y);
 					int z=FindHra(salary,hra);
 						printf("HRA=%d\n",z);
 							int v=FindDa(salary,da);
 									printf("DA=%d\n",v);
}
int ToFindSalary(int salary,int da,int ta,int hra)
{
		int total=salary+da+ta+hra;
		return total;
}
int FindHra(int salary,int hra)
{
	return hra;
}
int FindDa(int salary,int da)
{
	return da;
}
int FindTa(int salary,int ta)
{
	return ta;
}