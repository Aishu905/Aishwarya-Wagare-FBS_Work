#include<stdio.h>
void main()
{
	int arr1[5];
	int arr2[5];
	printf("Enter the element in array 1:\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter the element in array 2:\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr2[i]);
	}
	for(int i=0;i<5;i++)
	{
		
		printf("  %d\n%d\n",arr1[i],arr2[i]);
	}
	
}