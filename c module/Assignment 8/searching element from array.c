#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter element in an array:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	int found=0;
	int search;
	scanf("%d",&search);
	for(int i=0;i<5;i++)
	{
	  if(arr[i]==search)
	  	found=1;
	}
	if(found==1)
	printf("number found");
	else
	printf("number not found");

}