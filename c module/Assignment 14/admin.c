#include<stdio.h>
#include<string.h>
struct admin
{
	int id;
	char name[20];
	int salary;
	int allowance;	
};
void main()
{
	struct admin a1,a2;
	printf("Enter admin 1 infor:\n");
	a1.id=101;
	strcpy(a1.name,"Aishwarya");
	a1.salary=67000;
	a1.allowance=5000;
	printf("ID:%d\n",a1.id);
	printf("NAME:%s\n",a1.name);
	printf("SALARY:%d\n",a1.salary);
	printf("ALLOWANCE:%d\n",a1.allowance);
	printf("Enter admin 2 info:\nid,name,salary,allowance");
	scanf("%d",&a2.id);
	scanf("%s",a2.name);
	scanf("%d",&a2.salary);
	scanf("%d",&a2.allowance);
	printf("ID:%d\n",a2.id);
	printf("NAME:%s\n",a2.name);
	printf("SALARY:%d\n",a2.salary);
	printf("ALLOWANCE:%d\n",a2.allowance);
	
}