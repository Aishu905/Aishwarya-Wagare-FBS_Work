#include<stdio.h>
#include<string.h>
typedef struct Address
{
	char cityname[10];
	int pincode;
}Adress;
typedef struct Employee
{
	int id;
	char name[10];
	int salary;
	struct Address add;
}Employee;
void main()
{
	Employee e1;
	printf("Enter Employee details:\n");
	scanf("%d",&e1.id);
	scanf("%s",e1.name);
	scanf("%d",&e1.salary);
	scanf("%s",e1.add.cityname);
	scanf("%d",&e1.add.pincode);
	printf("Employee details are:\n");
	printf("Id:%d\n",e1.id);
	printf("Name:%s\n",e1.name);
	printf("Salary:%d\n",e1.salary);
	printf("City Name:%s\n",e1.add.cityname);
	printf("Pincode:%d\n",e1.add.pincode);
	
}