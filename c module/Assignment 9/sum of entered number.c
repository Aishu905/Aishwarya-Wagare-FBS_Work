#include<stdio.h>
void sumOfEnteredNo(int*,int);
void main()
{
	int arr[5];
		printf("Enter element in an array:");
	 sumOfEnteredNo(&arr[0],5);
}
void sumOfEnteredNo(int*arr,int size)
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum:%d",sum);
}