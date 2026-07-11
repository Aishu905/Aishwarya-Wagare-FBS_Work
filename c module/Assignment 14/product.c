#include<stdio.h>
#include<string.h>
struct product
{
	int id;
	char name[10];
	int quantity;
	double price;	
};
void main()
{
	struct product p1,p2;
	printf("Enter product 1:\n");
	p1.id=10;
	strcpy(p1.name,"laptop");
	p1.quantity=20;
	p1.price=50000;
	printf("ID:%d\n",p1.id);
	printf("NAME:%s\n",p1.name);
	printf("QUANTITY:%d\n",p1.quantity);
	printf("PRICE:%.2f\n",p1.price);
	printf("Enter product 2:\n");
	scanf("%d",&p2.id);
	scanf("%s",p2.name);
	scanf("%d",&p2.quantity);
	scanf("%lf",&p2.price);
	printf("ID:%d\n",p2.id);
	printf("NAME:%s\n",p2.name);
	printf("QUANTITY:%d\n",p2.quantity);
	printf("PRICE:%.2f\n",p2.price);
}