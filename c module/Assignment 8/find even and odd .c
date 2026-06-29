#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter the element in an array:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		printf("even:%d\n",arr[i]);
	}
		for(int i=0;i<5;i++)
	{
		 if(arr[i]%2!=0)
			printf("odd:%d\n",arr[i]);
	}

}