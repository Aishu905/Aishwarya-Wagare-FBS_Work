#include<stdio.h>
#include<stdlib.h>
void main()
{
	int size=5;
	int* arr=(int*)malloc(sizeof(int)*size);
	printf("Enter the element in an array:");
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