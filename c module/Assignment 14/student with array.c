#include<stdio.h>
typedef struct student
{
	int rollno;
	char name[10];
	int marks;
}student;
void studentInfo(student* ,int );
void main()
{
	struct student;
	 student sarr[10];
	printf("Enter student details:\n");
	studentInfo(&sarr[0],10);
}
void studentInfo(student* sarr,int size)
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&sarr[i].rollno);
		scanf("%s",sarr[i].name);
		scanf("%d",&sarr[i].marks);
	}
	printf("Student details are:\n");
	for(int i=0;i<size;i++)
	{
		printf("ROLLNO:%d\n",sarr[i].rollno);
		printf("NAME:%s\n",sarr[i].name);
		printf("MARKS:%d\n",sarr[i].marks);
	}
}