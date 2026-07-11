#include<stdio.h>
typedef struct distance
{
	int feet,inch;
}distance;
void distanceInfo(distance*,int);
void main()
{
	struct distance;
	distance arr[3];
	printf("Enter distance information:\n");
	 distanceInfo(&arr[0],3);
}
void distanceInfo(distance* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i].feet);
		scanf("%d",&arr[i].inch);
	}
	printf("Distance are:\n");
	for(int i=0;i<size;i++)
	{
		printf("Feet:%d\n",arr[i].feet);
		printf("Inch:%d\n",arr[i].inch);
	}
}