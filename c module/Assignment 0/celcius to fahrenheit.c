#include<stdio.h>
void main()
{
	float celcius,fahrenheit;
	printf("Enter temperature:");
	scanf("%.2f",celcius);
	fahrenheit=(celcius*9/5)+32;
	printf("%.2f",fahrenheit);
	
}