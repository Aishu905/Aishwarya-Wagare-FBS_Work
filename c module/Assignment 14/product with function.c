#include<stdio.h>
typedef struct SalesManager
{
	int id;
	char name[10];
	int quantity;
	double price;
}SalesManager;
SalesManager scanSalesManager();
void showSalesManager(SalesManager );
void main()
{
	SalesManager s1,s2;
	printf("Enter SalesManager details 1:\n");
	s1=scanSalesManager();
	printf("Enter SalesManager details 2:\n");
	s2=scanSalesManager();
	printf("Enter SalesManager details are:\n");
	showSalesManager(s1);
	showSalesManager(s2);
}
SalesManager scanSalesManager()
{
	SalesManager temp;
	scanf("%d",&temp.id);
	scanf("%s",temp.name);
	scanf("%d",&temp.quantity);
	scanf("%lf",&temp.price);
	return temp;
}
void showSalesManager(SalesManager s)
{
	printf("Id:%d\n   Product Name:%s\n    Quantity:%d\n   Price:%.2f\n" ,s.id,s.name,s.quantity,s.price);
}