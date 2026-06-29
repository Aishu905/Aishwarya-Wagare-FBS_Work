#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* arr1=(int*)malloc(sizeof(int)*10);
	int* arr2=(int*)malloc(sizeof(int)*10);
	int* arr3=(int*)malloc(sizeof(int)*10);
	printf("Enter element in array 1:\n");
	for(int i=0;i<10;i++)
	{
			scanf("%d",&arr1[i]);
	}
	printf("Enter element in array 2:\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr2[i]);
	}
	for(int i=0;i<10;i++)
	{
		arr3[i]=arr1[i]+arr2[i];
		printf("sum:%d\n",arr3[i]);
	}
	
}