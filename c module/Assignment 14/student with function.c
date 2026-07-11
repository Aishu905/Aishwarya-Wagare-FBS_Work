#include<stdio.h>
typedef struct student
{
	int rollno;
	char name[10];
	int marks;
}student;
student scanStudents();
void studentShow(student );
void main()
{
	 student s1,s2;
	printf("Enter student details 1:\n");
	s1=scanStudents();
	printf("Enter student details 2:\n");
	s2=scanStudents();
	printf("student details are:\n");
	studentShow(s1);
	studentShow(s2);
}
student scanStudents()
{
	student temp;
	scanf("%d",&temp.rollno);
	scanf("%s",temp.name);
	scanf("%d",&temp.marks);
	return temp;
}
void studentShow(student s)
{
	printf("   Roll NO:%d \n    Name:%s \n    Marks:%d \n",s.rollno,s.name,s.marks);
}