#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* arr=(int*)malloc(sizeof(int)*5);
		printf("Enter element in an array:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum:%d",sum);
}