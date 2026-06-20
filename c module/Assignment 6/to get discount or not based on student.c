#include<stdio.h>
float toCheckStudent(float,float,float,char);
void main() 
{
	float price=700;
	float final,discount=0;
	char ch='y';
	 float f=toCheckStudent(price,final,discount,ch);
	 	printf("Final price is:%.2f",f);
	 
}
float toCheckStudent(float price,float final,float discount,char ch)
{
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
	return  final;
}