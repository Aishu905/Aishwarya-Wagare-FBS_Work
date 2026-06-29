#include<stdio.h>
void maxMin(int*,int);
void main()
{
	int arr[10];
	printf("Enter element in an array:");
	maxMin(&arr[0],10);
}
void maxMin(int*arr,int size)
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	int min=arr[0];
	for(int i=1;i<size;i++)
	{
		if(max<arr[i])
			max=arr[i];
			if(min>arr[i])
				min=arr[i];
	}
	printf("max:%d\n",max);
	printf("min:%d\n",min);
}