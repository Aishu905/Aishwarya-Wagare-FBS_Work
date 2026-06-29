#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter element in an array:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5/2;i++)
	{
		int temp;
		temp=arr[i];
		arr[i]=arr[5-1-i];
		arr[5-1-i]=temp;
	}
	for(int i=0;i<5;i++)
	{
		printf(" %d",arr[i]);
	}
	
}