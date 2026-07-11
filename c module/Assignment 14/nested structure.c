#include<stdio.h>
#include<string.h>
typedef struct Date
{
	int day,month,year;
}Date;
typedef struct student
{
	int rollno;
	char name[10];
	int marks;
	Date dob;
}student;
void main()
{
	student s1;
	s1.rollno=101;
	strcpy(s1.name,"Aishwarya");
	s1.marks=89;
	s1.dob.day=10;
	s1.dob.month=5;
	s1.dob.year=2026;
	printf("Roll no:%d\n",s1.rollno);
	printf("Name:%s\n",s1.name);
	printf("Marks:%d\n",s1.marks);
	printf("Date of Birth:\n");
	printf("Day:%d\n",s1.dob.day);
	printf("Month:%d\n",s1.dob.month);
	printf("Year:%d\n",s1.dob.year);
}