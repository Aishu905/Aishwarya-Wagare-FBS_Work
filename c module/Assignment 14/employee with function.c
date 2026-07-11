#include<stdio.h>
typedef struct Employee
{
	int id;
	char name[10];
	int salary;
}Employee;
Employee scanEmployee();
void showEmployee(Employee );
void main()
{
	Employee e1,e2;
	printf("Enter employee 1 information:\n");
	e1=scanEmployee();
	printf("Enter employee 2 information:\n");
	e2=scanEmployee();
	printf("Employee details 1 are:\n");
	showEmployee(e1);
	printf("Employee details 2 are:\n");
	showEmployee(e2);
}
Employee scanEmployee()
{
	Employee temp;
	scanf("%d",&temp.id);
	scanf("%s",temp.name);
	scanf("%d",&temp.salary);
	return temp;
}
void showEmployee(Employee e)
{
	printf("Id:%d\n  Name:%s\n  Salary:%d\n",e.id,e.name,e.salary);
}