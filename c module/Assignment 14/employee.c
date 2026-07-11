#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[10];
	int salary;
};
void main()
{
	struct employee e1,e2;
	printf("Enter employee 1 info:\n");
	e1.id=101;
	strcpy(e1.name,"vidya");
	e1.salary=50000;
	printf("Employee Id:%d\n",e1.id);
	printf("Employee Name:%s\n",e1.name);
	printf("SALARY:%d\n",e1.salary);
	printf("Enter employee 2 info:\n");
	scanf("%d",&e2.id);
	scanf("%s",e2.name);
	scanf("%d",&e2.salary);
	printf("Employee Id:%d\n",e2.id);
	printf("Employee Name:%s\n",e2.name);
	printf("SALARY:%d\n",e2.salary);
}