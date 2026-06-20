 #include<stdio.h>
int add(int,int,int);
int sub(int,int,int);
int mul(int,int,int);
int div(int,int,int);
int mod(int,int,int);
void main()
{
	int a=120,b=45,ch,c;
	printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.modulus\n");
	printf("Enter choice:");
	fflush(stdin);
	scanf("%d",&ch);
	int res=add(a,b,ch);
	if(ch==1)
		printf("addition is:%d",res);
		int x=sub(a,b,ch);
		 if(ch==2)
			printf("substraction is:%d",x);
			int y=mul(a,b,ch);
				if(ch==3)
					printf("Multiplication is:%d",y);
						int z=div(a,b,ch);
							if(ch==4)
								printf("division is:%d",z);
									int v=mod(a,b,ch);
										if(ch==5)
												printf("modulus is:%d",v);
										
						
					
}
int add(int a,int b,int ch)
{
  int c=a+b;
	return c;
}
int sub(int a,int b,int ch)
{
	int	c=a-b;
	return c;
}
int mul(int a,int b,int ch)
{
	int	c=a*b;
	return c;
}
int div(int a,int b,int ch)
{
	int	c=a/b;
	return c;
}
int mod(int a,int b,int ch)
{
	int c=a%b;
	return c;
}