#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Book
{
	int id;
	char name[10];
	double price;
	char author[20];
	double rate;
}Book;

int size=7;
void storeHardCoded(Book*,int* );
void displayBook(Book*,int );
int BookSearch(Book*,int,int);
void addBook(Book*,int*,Book* );
void deleteBook(Book*,int*,int );
void updateBook(Book* ,int,int);
void sortBook(Book* ,int );
void main()
{
	
	Book* sarr=(Book*)malloc(sizeof(Book)*size);
	int currindex;
	storeHardCoded(sarr,&currindex);
	
	int exit;
	do
	{
		printf("Enter choice 1 to display:\n");
		printf("Enter choice 2  to search:\n");
		printf("Enter choice 3 to add:\n");
		printf("Enter choice 4 to delete:\n");
		printf("Enter choice 5 to update:\n");
		printf("Enter choice 6 to sort:\n");
		int choice;
		printf("Enter choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Book details are:\n");
				displayBook(sarr,currindex);
				break;
				
			case 2:
				printf("Book you want to search:\n");
				int id;
				printf("Enter id of book:\n");
				scanf("%d",&id);
				int index=BookSearch(sarr,currindex, id);
				if(index!=-1)
				{
					printf("Book found\n");
					printf("%d %s %.2f %s %.2f",sarr[index].id,sarr[index].name,sarr[index].price,sarr[index].author,sarr[index].rate);
				}
				else
					printf("Not found\n");
				break;
					
			case 3:
				{
					Book b;
					printf("Enter details:\n");
					scanf("%d%s%lf%s%lf",&b.id,b.name,&b.price,b.author,&b.rate);
					addBook(sarr,&currindex,&b);
					break;
				}
				
			case 4:
				printf("Enter id you want to delete:\n");
				scanf("%d",&id);
				deleteBook(sarr,&currindex,id);
				break;
				
			case 5:
				printf("Enter id you want to update:\n ");
				scanf("%d",&id);
				updateBook(sarr,currindex,id);
				break;
				
			case 6:
				printf("you want to sort:\n");
				sortBook(sarr,currindex);
				break;
				
			default:
				printf("Invalid choice:");
		}
		printf("Do you want to continue:1/0 .....");
		scanf("%d",&exit);
	}while(exit==1);
	
}
void storeHardCoded(Book* sarr,int* currindex)
{
	sarr[0].id=101;
	strcpy(sarr[0].name,"English");
	sarr[0].price=500;
	strcpy(sarr[0].author,"William Shakespeare");
	sarr[0].rate=4.8;
	
	sarr[1].id=102;
	strcpy(sarr[1].name,"Marathi");
	sarr[1].price=400;
	strcpy(sarr[1].author,"V.S.Khandekar");
	sarr[1].rate=3.8;
	
	sarr[2].id=103;
	strcpy(sarr[2].name,"Hindi");
	sarr[2].price=350;
	strcpy(sarr[2].author,"Munshi premchand");
	sarr[2].rate=5.1;
	
	sarr[3].id=104;
	strcpy(sarr[3].name,"Maths");
	sarr[3].price=689;
	strcpy(sarr[3].author,"R.D.Sharma");
	sarr[3].rate=4.8;
	
	sarr[4].id=105;
	strcpy(sarr[4].name,"Geography");
	sarr[4].price=200;
	strcpy(sarr[4].author,"Majid Husain");
	sarr[4].rate=4.6;
	
	*currindex=5;
	
}
void displayBook(Book* sarr,int size)
{
	printf("   Id       Name       Price       Author                 Rating:\n");
	for(int i=0;i<size;i++)
	{
		printf("   %d   ",sarr[i].id);
		printf("   %s   ",sarr[i].name);
		printf("   %.2f  ",sarr[i].price);
		printf("   %s      ",sarr[i].author);
		printf("    %.2f   \n",sarr[i].rate);
	}
}
int BookSearch(Book* sarr,int size,int id)
{
	for(int i=0;i<size;i++)
	{
		if(sarr[i].id==id)
		return i;
	}
	return -1;
}
void addBook(Book* sarr,int* currindex,Book* b)
{
	if(*currindex>=size)
	{
		printf("Size full and reallocation started:\n");
		int newsize=size*2;
		sarr=(Book*)realloc(sarr,sizeof(Book)*newsize);
		size=newsize;
	}
	sarr[*currindex]=*b;
	(*currindex)++;
}
void deleteBook(Book* sarr,int* currindex,int id)
{
	int index=BookSearch(sarr,*currindex, id);
	if(index!=-1)
	{
		for(int i=index;i<*currindex-1;i++)
			sarr[i]=sarr[i+1];
			
		(*currindex)--;
	
		printf("Delete successfully\n");
	}
	else
	printf("Book Not found\n");
}
void updateBook(Book* sarr,int currindex,int id)
{
	int index=BookSearch(sarr,currindex,id);
	if(index!=-1)
	{
		printf("Enter 1 to update name and 2 to update price:\n");
		while(1)
		{
			int subchoice;
			printf("Enter subchoice:\n");
			scanf("%d",&subchoice);
			if(subchoice==1)
			{
				printf("Enter name:\n");
				char str[10];
				scanf("%s",str);
				strcpy(sarr[index].name,str);
				printf("Name updated successfully\n");
			}
			else if(subchoice==2)
			{
				double price;
				printf("Enter new price");
				scanf("%lf",&price);
				sarr[index].price=price;
				printf("Price updated successfully\n");
			}
			else if(subchoice==3)
				break;
			else
			printf("Invalid choice\n");
		}
		printf("Record not found\n");
	}
	
}
void sortBook(Book* sarr,int currindex)
{
	Book* temparr=(Book*)malloc(sizeof(Book)*size);
		printf("Enter 1 to sort price and 2 to rating:\n");
		int subchoice;
			printf("Enter subchoice:\n");
			scanf("%d",&subchoice);
			for(int i=0;i<currindex;i++)
			{
				temparr[i]=sarr[i];
			}
			for(int i=0;i<currindex-1;i++)
			{
				for(int j=i+1;j<currindex;j++)
				{
					if(subchoice==1)
				{
					if(temparr[i].price>temparr[j].price)
					{
						Book temp;
						temp=temparr[i];
						temparr[i]=temparr[j];
						temparr[j]=temp;
						
					}
				}
				else if(subchoice==2)
				{
					if(temparr[i].rate>temparr[j].rate)
					{
						Book temp;
						temp=temparr[i];
						temparr[i]=temparr[j];
						temparr[j]=temp;
						
					}
				}
		
				}
			}
			displayBook(temparr,currindex);
				
			 if(subchoice==3)
			printf("exit..");	
}
