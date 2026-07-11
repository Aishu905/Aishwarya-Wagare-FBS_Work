#include<stdio.h>
#include<string.h>
struct HR
{
	int id;
	char name[10];
	int salary,commission;	
};
void main()
{
	struct HR hr1,hr2;
	printf("Enter HR1 info:\n");
	hr1.id=201;
	strcpy(hr1.name,"Aishwarya");
	hr1.salary=50000;
	hr1.commission=8000;
	printf("ID:%d\n",hr1.id);
	printf("NAME:%s\n",hr1.name);
	printf("SALARY:%d\n",hr1.salary);
	printf("COMMISSION:%d\n",hr1.commission);
	printf("Enter HR2 info:\n id name salary commission");
	scanf("%d",&hr2.id);
	scanf("%s",hr2.name);
	scanf("%d",&hr2.salary);
	scanf("%d",&hr2.commission);
	printf("ID:%d\n",hr2.id);
	printf("NAME:%s\n",hr2.name);
	printf("SALARY:%d\n",hr2.salary);
	printf("COMMISSION:%d\n",hr2.commission);
}