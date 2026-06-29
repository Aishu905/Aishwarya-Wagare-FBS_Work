#include<stdio.h>
void search(int*,int);
void main()
{
	int arr[5];
	printf("Enter element in an array:");
	 search(&arr[0],5);
}
void search(int*arr,int size)
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int found=0;
	int search;
	scanf("%d",&search);
	for(int i=0;i<size;i++)
	{
	  if(arr[i]==search)
	  	found=1;
	}
	if(found==1)
	printf("number found");
	else
	printf("number not found");
}