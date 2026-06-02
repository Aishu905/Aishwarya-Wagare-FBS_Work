#include<stdio.h>
void main()
{
	int english=60;
	int maths=80;
	int marathi=90;
	int science=75;
	int geography=95;
	int total=english+maths+marathi+science+geography;
	float per = (total/500.00)*100;
	printf("total of 5 subject:%d\n",total);
	printf("Percentage is:%.2f",per);
}