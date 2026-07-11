#include<stdio.h>
#include<string.h>
struct SalesManager
{
	int id;
	char name[10];
	int salary,incentive,target;	
};
void main()
{
	struct SalesManager s1,s2;
	printf("Enter sales manager 1 info:\n");
	s1.id=101;
	strcpy(s1.name,"Aishwarya");
	s1.salary=70000;
	s1.incentive=10000;
	s1.target=3;
	printf("ID:%d\n",s1.id);
	printf("NAME:%s\n",s1.name);
	printf("SALARY:%d\n",s1.salary);
	printf("INCENTIVE:%d\n",s1.incentive);
	printf("MONTH TARGET:%d\n",s1.target);
	printf("Enter sales manager 2 info:\n");
	scanf("%d",&s2.id);
	scanf("%s",s2.name);
	scanf("%d",&s2.salary);
	scanf("%d",&s2.incentive);
	scanf("%d",&s2.target);
	printf("ID:%d\n",s2.id);
	printf("NAME:%s\n",s2.name);
	printf("SALARY:%d\n",s2.salary);
	printf("INCENTIVE:%d\n",s2.incentive);
	printf("MONTH TARGET:%d\n",s2.target);
}