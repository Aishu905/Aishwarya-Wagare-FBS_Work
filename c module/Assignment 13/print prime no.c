#include<stdio.h>
#include<stdlib.h>
void main()
{
	int size=10;
	int* arr=(int*)malloc(sizeof(int)*size);
	printf("Enter element in an array:");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++)
	{
		int flag=0;
		for(int j=2;j<size;j++)
		{
			if(arr[i]%j==0)
			flag=1;
			break;
		}
			if(flag==0)
	printf("prime:%d\n",arr[i]);
	}
}