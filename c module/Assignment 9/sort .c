#include<stdio.h>
void sort(int*,int);
void main()
{
	int arr[5];
	printf("Enter element in an array:");
	 sort(&arr[0],5);
}
void sort(int*arr,int size)
{	
	for (int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			int temp;
			if(arr[i]>arr[j])
			{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			}
		}
		printf("%d\n",arr[i]);
	}
}