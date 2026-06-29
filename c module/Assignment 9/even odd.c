#include<stdio.h>
void evenOdd(int*,int);
void main()
{
	int arr[5];
	printf("Enter the element in an array:");
	 evenOdd(&arr[0],5);
}
void evenOdd(int* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		printf("even:%d\n",arr[i]);
	}
		for(int i=0;i<size;i++)
	{
		 if(arr[i]%2!=0)
			printf("odd:%d\n",arr[i]);
	}
}