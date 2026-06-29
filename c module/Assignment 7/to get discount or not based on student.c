#include<stdio.h>
void toCheckStudent(float*,float*,float*,char*);
void main() 
{
	float price=700;
	float final,discount=0;
	char ch='y';
	 toCheckStudent(&price,&final,&discount,&ch);
	 	
	 
}
void toCheckStudent(float* price,float* final,float* discount,char* ch)
{
	if(ch=='y') 
	{
		if(*price>500)
		 {
		 	*discount=*price*0.20;
			*final=*price-*discount;
		} 
		else 
		{
			*discount= *price*0.10;
			*final=*price-*discount;
		}
	} 
	else
	 {
		if(*price>600) 
		{
			*discount=*price*0.15;
			*final=*price-*discount;
		} 
		else
		 {
			*discount=0;
			*final=*price;
		}
	}
	printf("Final price is:%.2f",*final);
}