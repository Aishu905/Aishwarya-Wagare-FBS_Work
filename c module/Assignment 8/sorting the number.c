#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter element in an array:");
	for (int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
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