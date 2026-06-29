#include<stdio.h>
void merge(int*,int*,int);
void main()
{
	int arr1[5];
	int arr2[5];
	 merge(&arr1[0],&arr2[0],5);
}
void merge(int*arr1,int*arr2,int size)
{
		printf("Enter the element in array 1:\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr1[i]);
	}
		printf("Enter the element in array 2:\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr2[i]);
	}	
	for(int i=0;i<size;i++)
	{
		
		printf("  %d\n%d\n",arr1[i],arr2[i]);
	}
}