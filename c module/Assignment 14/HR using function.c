#include<stdio.h>
typedef struct HR
{
	int id;
	char name[10];
	int salary,commission;
}HR;
HR scanHR();
void displayHR(HR );
void main()
{
	HR h1,h2;
	printf("Enter details of HR 1:\n");
	h1=scanHR();
	printf("Enter details of HR 1:\n");
	h2=scanHR();
	printf("HR details are:\n");
	displayHR( h1);
	displayHR( h2);
}
HR scanHR()
{
	HR temp;
	scanf("%d",&temp.id);
	scanf("%s",temp.name);
	scanf("%d",&temp.salary);
	scanf("%d",&temp.commission);
	return temp;
}
void displayHR(HR h)
{
	printf("Id:%d\n  Name:%s\n  Salary:%d\n  Commission:%d\n",h.id,h.name,h.salary,h.commission);
}
