#include<stdio.h>
struct complex
{
	int real,imag;	
};
void main()
{
	struct complex c1,c2;
	printf("Enter complex 1:\n");
	c1.real=5;
	c1.imag=3;
	printf("REAL:%d\n",c1.real);
	printf("IMAGINARY:%d\n",c1.imag );
	printf("%d",c1.real);
	printf("+");
	printf("%d%c\n",c1.imag,'i');
	printf("Enter complex 2:\n");
	scanf("%d",&c2.real);
	scanf("%d",&c2.imag);
	printf("REAL:%d\n",c2.real);
	printf("IMAGINARY:%d\n",c2.imag );
	printf("%d",c2.real);
	printf("+");
	printf("%d%c",c2.imag,'i');
	
}