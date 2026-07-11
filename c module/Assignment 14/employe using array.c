#include<stdio.h>
typedef struct employee
{
	int id;
	char name[10];
	int salary;
}employee;
void employeeInfo(employee* ,int );
void main()
{
	struct employee;
	employee arr[3];
	printf("Enter employee information:\n");
	 employeeInfo(&arr[0],3);
}
void employeeInfo(employee* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i].id);
		scanf("%s",arr[i].name);
		scanf("%d",&arr[i].salary);
	}
	printf("Employee information are:\n");
	for(int i=0;i<size;i++)
	{
		printf("Id:%d\n",arr[i].id);
		printf("Name:%s\n",arr[i].name);
		printf("Salary:%d\n",arr[i].salary);
	}
}