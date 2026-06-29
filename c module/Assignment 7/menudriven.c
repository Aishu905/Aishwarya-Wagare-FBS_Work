#include<stdio.h>
void even(int*);
void prime(int* ,int* );
void palindrome(int* ,int*,int*,int*);
void checkNo(int*);
void reverse(int*,int*,int*,int* );
void sumDigit(int*,int*,int*);
void main()
{
	int no=298,rem,temp=no,rev=0,sum=0,i;
      int ch;
	printf("Enter your choice:");
	scanf("%d",&ch);
		if(ch==1)
		{
			 even(&no);
		}
		else if(ch==2)
		{
			 prime(&no,&i);
		}
	   else	if(ch==3)
		{
			 palindrome(&temp,&rem,&rev,&no);
		}
			else if(ch==4)
			{
				checkNo(& no);
			}
			else if(ch==5)
			{
			 reverse(&temp,&rev,&rem,&no);
			}
		else if(ch==6)
			{
				 sumDigit( &temp,& rem, &sum);
			}
}
void even(int* no)
{
		if(*no%2==0)
			{
				printf("No is even");
			}
			else
			{
				printf("No is odd");
			}
}
void prime(int* no,int* i)
{
			 *i=2;
			if(*no%*i==0)
			{
				printf("It is non prime number");
			}
			else
			{
				printf("It is prime number");
			}
}
void palindrome(int* temp,int* rem,int* rev,int* no)
{
	while(*temp>0)
			{
			
			*rem=*temp%10;
			*rev=*rev*10+*rem;
			*temp=*temp/10;
			}
	     	if(*rev==*no)
			{
				printf("No is palindrome");
			}
			else
			{
				printf("No is non palindrome");
			}
}
void checkNo(int* no)
{
				if(*no>0)
				{
					printf("No is positive");
				}
				else if(*no<0)
				{
					printf("No is negative");
				}
				else
				{
					printf("No is zero");
				}
}
void reverse(int* temp,int* rem,int* rev,int* no)
{
			while(*temp>0)
				{
					*rem=*temp%10;
					*rev=*rev*10+*rem;
					*temp=*temp/10;
				}
				if(*rev==*no)
				{
					printf("it is reverse number");
				}
				else
				{
					printf("it is non reverse number");
				}
}
void sumDigit(int* temp,int* rem,int* sum)
{			while(*temp>0)
				{
					*rem=*temp%10;
					*sum=*sum+*rem;
					*temp=*temp/10;
					
				}
					printf("%d",*sum);
}