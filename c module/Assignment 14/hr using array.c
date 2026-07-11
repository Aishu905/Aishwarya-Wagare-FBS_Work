#include<stdio.h>
typedef struct HR
{
	int id;
	char name[10];
	int salary,commission;
}HR;
void HRinfo(HR*,int);
void main()
{
	struct HR;
	HR arr[3];
	printf("Enter HR information:\n");
	 HRinfo(arr,3);
}
void HRinfo(HR* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i].id);
		scanf("%s",arr[i].name);
		scanf("%d",&arr[i].salary);
		scanf("%d",&arr[i].commission);
	}
	printf("HR information are:\n");
	for(int i=0;i<size;i++)
	{
		printf("Id:%d\n",arr[i].id);
		printf("Name:%s\n",arr[i].name);
		printf("Salary:%d\n",arr[i].salary);
		printf("Commission:%d\n",arr[i].commission);
	}
}