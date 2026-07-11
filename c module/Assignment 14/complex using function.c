#include<stdio.h>
typedef struct complex
{
	int real,imaginary;
}complex;
complex scanComplex();
void displayComplex(complex );
void main()
{
	complex c1,c2;
	printf("Enter complex 1 information:\n");
	c1=scanComplex();
	printf("Enter complex 2 information:\n");
	c2=scanComplex();
	printf("Complex details are:\n");
	displayComplex(c1);
	displayComplex(c2);
}
complex scanComplex()
{
	complex temp;
	scanf("%d",&temp.real);
	scanf("%d",&temp.imaginary);
	return temp;
}
void displayComplex(complex c)
{
	printf("Real:%d\n    Imaginary:%d\n   ",c.real,c.imaginary);
	
}