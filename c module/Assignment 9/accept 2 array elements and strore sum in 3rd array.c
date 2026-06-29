#include<stdio.h>
void sum(int*,int*,int);
void main()
{
	int arr1[10];
	int arr2[10];
	 sum(&arr1[0],&arr2[0],10);
}
void sum(int*arr1,int*arr2,int size)
{
	int arr3[10];
		printf("Enter element in array 1:\n");
	for(int i=0;i<size;i++)
	{
			scanf("%d",&arr1[i]);
	}
		printf("Enter element in array 2:\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr2[i]);
	}
	for(int i=0;i<size;i++)
	{
		arr3[i]=arr1[i]+arr2[i];
		printf("sum:%d\n",arr3[i]);
	}
}