#include<stdio.h>
void main()
{
	int arr[10];
	printf("Enter element in an array:");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	int min=arr[0];
	for(int i=1;i<10;i++)
	{
		if(max<arr[i])
			max=arr[i];
			if(min>arr[i])
				min=arr[i];
	}
	printf("max:%d\n",max);
	printf("min:%d\n",min);
}