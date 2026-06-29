#include<stdio.h>
void alternate(int*,int);
void main()
{
	int arr[10];
	printf("Enter element in an array:");
	 alternate(&arr[0],10);
}
void alternate(int*arr,int size)
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i=i+2)
	{
		printf("Alternate :%d\n",arr[i]);
	}
}