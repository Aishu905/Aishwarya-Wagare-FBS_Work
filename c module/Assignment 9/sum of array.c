#include<stdio.h>
void sumArray(int*,int);
void main()
{
	int arr[5];
		printf("Enter element in an array:");
	 sumArray(&arr[0],5);
}
void sumArray(int*arr,int size)
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i];
		printf("%d\n",sum);
	}
}