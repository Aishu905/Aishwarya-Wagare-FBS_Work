#include<stdio.h>
typedef struct admin
{
	int id;
	char name[10];
	int salary,allowance;
}admin;
admin adminScan();
void showAdmin(admin );
void main()
{
	admin a1,a2;
	printf("Enter admin 1 information:\n");
	a1=adminScan();
	printf("Enter admin 2 information:\n");
	a2=adminScan();
	printf("Admin details are:\n");
	showAdmin(a1);
	showAdmin(a2);
}
admin adminScan()
{
	admin temp;
	scanf("%d",&temp.id);
	scanf("%s",temp.name);
	scanf("%d",&temp.salary);
	scanf("%d",&temp.allowance);
	return temp;
}
void showAdmin(admin a)
{
	printf("  Id:%d\n    Name:%s\n    Salary:%d\n    Allowance:%d\n  ",a.id,a.name,a.salary,a.allowance);
}