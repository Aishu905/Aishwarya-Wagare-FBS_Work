#include<stdio.h>
typedef struct SalesManager
{
	int id;
	char name[10];
	int salary,incentive,target;
}SalesManager;
SalesManager scanSalesManager();
void showSalesManager(SalesManager );
void main()
{
	SalesManager s1,s2;
	printf("Enter SalesManager 1 information:\n");
	s1=scanSalesManager();
	printf("Enter SalesManager 2 information:\n");
	s2=scanSalesManager();
	printf("SalesManager 1 details are:\n");
	showSalesManager(s1);
	printf("SalesManager 1 details are:\n");
	showSalesManager(s2);
}
SalesManager scanSalesManager()
{
	SalesManager temp;
	scanf("%d",&temp.id);
	scanf("%s",temp.name);
	scanf("%d",&temp.salary);
	scanf("%d",&temp.incentive);
	scanf("%d",&temp.target);
	return temp;
}
void showSalesManager(SalesManager s)
{
	printf("Id:%d\n  Name:%s\n  Salary:%d\n  Incentive:%d\n  Month target:%d\n",s.id,s.name,s.salary,s.incentive,s.target);
}