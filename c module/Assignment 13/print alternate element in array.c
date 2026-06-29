#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* arr=(int*)malloc(sizeof(int)*10);
	printf("Enter element in an array:");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<10;i=i+2)
	{
		printf("Alternate :%d\n",arr[i]);
	}
	
}