#include<stdio.h>
void main()
{
	float price=800;
	float final,discount=0;
	char ch='y';
	
	if(ch=='y')
	{
		if(price>500)
		{
		
			discount=price*0.20;
			final=price-discount;
		}
		else
		{
			  discount= price*0.10;
			final=price-discount;
		}
	}
	else
	{
		if(price>600)
		{
		
			discount=price*0.15;
			final=price-discount;
		}
		
		else
		{
		
			discount=0;
			final=price;
		}
	}

		printf("price with :%.2f is %.2f",discount,final);
}
