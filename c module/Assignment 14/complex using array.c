#include<stdio.h>
typedef struct complex
{
	int real,imaginary;
}complex;
void complexInfo(complex*,int);
void main()
{
	struct complex;
	complex arr[5];
	printf("Enter number:\n");
	 complexInfo(&arr[0],5);
}
void complexInfo(complex* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i].real);
		scanf("%d",&arr[i].imaginary);
	}
	printf("Complex are:\n");
	for(int i=0;i<size;i++)
	{
		printf("Real:%d\n",arr[i].real);
		printf("Imaginary:%d\n",arr[i].imaginary);
		printf("%d",arr[i].real);
		printf("+");
		printf("%d%c\n",arr[i].imaginary,'i');
	}
}