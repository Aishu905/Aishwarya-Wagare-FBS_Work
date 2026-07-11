#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[20];
	int marks;
};
void main()
{
	struct student s1,s2;
	printf("Enter student 1 details:");
	s1.rollno=101;
	strcpy(s1.name,"Aishwarya");
	s1.marks=89;
	printf("Roll No:%d\n",s1.rollno);
	printf("Name:%s\n",s1.name);
	printf("Marks:%d\n",s1.marks);
	printf("Enter student 2 deatils:rollno,name,marks");
	scanf("%d",&s2.rollno);
	scanf("%s",s2.name);
	scanf("%d",&s2.marks);
	printf("Roll No:%d\n",s2.rollno);
	printf("Name:%s\n",s2.name);
	printf("Marks:%d\n",s2.marks);
	
}