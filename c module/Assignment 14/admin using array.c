#include<stdio.h>
typedef struct admin
{
	int id;
	char name[10];
	int salary;
	int allowance;
}admin;
void adminInfo(admin*,int );
void main()
{
	struct admin;
	admin arr[5];
	printf("Enter admin information:\n");
	adminInfo(&arr[0],5);
}
void adminInfo(admin* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i].id);
		scanf("%s",arr[i].name);
		scanf("%d",&arr[i].salary);
		scanf("%d",&arr[i].allowance);
	}
	printf("Admin Information are:\n");
	for(int i=0;i<size;i++)
	{
		printf("Id:%d\n",arr[i].id);
		printf("Name:%s\n",arr[i].name);
		printf("Salary:%d\n",arr[i].salary);
		printf("Allowance:%d\n",arr[i].allowance);
	}
}