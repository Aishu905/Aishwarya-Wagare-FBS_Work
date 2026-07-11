#include<stdio.h>
struct distance
{
	int feet,inch;	
};
void main()
{
	struct distance d1,d2;
	printf("Enter distance 1:\n");
	d1.feet=5;
	d1.inch=12;
	printf("FEET:%d\n",d1.feet);
	printf("INCH:%d\n",d1.inch);
	printf("Enter distance 2:\n");
	scanf("%d",&d2.feet);
	scanf("%d",&d2.inch);
	printf("FEET:%d\n",d2.feet);
	printf("INCH:%d\n",d2.inch);
}