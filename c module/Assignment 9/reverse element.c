#include<stdio.h>
void reverse(int*,int);
void main()
{
	int arr[5];
	printf("Enter element in an array:");
	 reverse(&arr[0],5);
}
void reverse(int*arr,int size)
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size/2;i++)
	{
		int temp;
		temp=arr[i];
		arr[i]=arr[size-1-i];
		arr[size-1-i]=temp;
	}
	for(int i=0;i<size;i++)
	{
		printf(" %d",arr[i]);
	}
}