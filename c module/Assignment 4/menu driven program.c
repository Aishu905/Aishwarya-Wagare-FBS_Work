#include<stdio.h>
void main()
{
	int no=298,rem,temp=no,rev=0,sum=0;
	int ch;
	printf("Enter your choice:");
	scanf("%d",&ch);
	for(int i=1;i<=no;i++)
	{	
	}
if(ch==1)
		{
			if(no%2==0)
			{
				printf("No is even");
			}
			else
			{
				printf("No is odd");
			}
		}
		else if(ch==2)
		{
			int i=2;
			if(no%i==0)
			{
				printf("It is non prime number");
			}
			else
			{
				printf("It is prime number");
			}
		}
	   else	if(ch==3)
		{
			while(temp>0)
			{
			
			rem=temp%10;
			rev=rev*10+rem;
			temp=temp/10;
			}
	     	if(rev==no)
			{
				printf("No is palindrome");
			}
			else
			{
				printf("No is non palindrome");
			}
		}
			else if(ch==4)
			{
				if(no>0)
				{
					printf("No is positive");
				}
				else if(no<0)
				{
					printf("No is negative");
				}
				else
				{
					printf("No is zero");
				}
			}
			else if(ch==5)
			{
				while(temp>0)
				{
					rem=temp%10;
					rev=rev*10+rem;
					temp=temp/10;
				}
				if(rev==no)
				{
					printf("it is reverse number");
				}
				else
				{
					printf("it is non reverse number");
				}
			}
		else if(ch==6)
			{
				while(temp>0)
				{
					rem=temp%10;
					sum=sum+rem;
					temp=temp/10;
					
				}
					printf("%d",sum);
			}
	  
}
