#include<stdio.h>
typedef struct salesManager
{
	int id;
	char name[10];
	int salary,incentive,target;
	
}salesManager;
void salesInfo(salesManager*,int);
void main()
{
	struct salesManager;
	salesManager arr[3];
	printf("Enter sales manager information:\n");
	 salesInfo(&arr[0],3);
}
void salesInfo(salesManager* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i].id);
		scanf("%s",arr[i].name);
		scanf("%d",&arr[i].salary);
		scanf("%d",&arr[i].incentive);
		scanf("%d",&arr[i].target);
	}
	printf("Sales manager information are:\n");
	for(int i=0;i<size;i++)
	{
		printf("Id:%d\n",arr[i].id);
		printf("Name:%s\n",arr[i].name);
		printf("Salary:%d\n",arr[i].salary);
		printf("Incentive:%d\n",arr[i].incentive);
		printf("Month Target:%d\n",arr[i].target);
	}
}