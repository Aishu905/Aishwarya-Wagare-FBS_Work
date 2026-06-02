#include<stdio.h>
void main()
{
	int min , hr , rem_min;
	printf("Enter minutes:");
	scanf("%d",&min);
	hr=min/60;
	rem_min=min%60;
	printf("Covert min into hr is %d=%d\n",min,hr);
	printf("Convert min into rem_min is %d=%d\n",min,rem_min);
}