#include<stdio.h>
typedef struct product
{
	int id;
	char name[10];
	int quantity;
	double price;
}product;
void productInfo(product*,int);
void main()
{
	struct product;
	product arr[3];
	printf("Enter product information:\n");
	 productInfo(&arr[0],3);
}
void productInfo(product* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i].id);
		scanf("%s",arr[i].name);
		scanf("%d",&arr[i].quantity);
		scanf("%lf",&arr[i].price);
	}
	printf("Your product details are:\n");
	for(int i=0;i<size;i++)
	{
		printf("Id:%d\n",arr[i].id);
		printf("Name:%s\n",arr[i].name);
		printf("Quantity:%d\n",arr[i].quantity);
		printf("Price:%.2f\n",arr[i].price);
	}
}