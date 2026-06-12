#include<stdio.h>
void main()
{
	int no=100,fact,sum,rem,temp;
	for(int i=1;i<=no;i++)
	{
		
		temp=i;
		sum=0;
	    while(temp>0)
	    {
	    	rem=temp%10;
	    	fact=1;
	    	while(rem>0)
	    	{
	    		fact=fact*rem;
	    		rem--;
			}
			sum=sum+fact;
			temp=temp/10;
			
		}
		if(sum==i)
		printf("%d\n",i);
		
	}
}