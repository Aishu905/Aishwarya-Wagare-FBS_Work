#include<stdio.h>
typedef struct Time
{
	int hr,min,sec;
}Time;
Time scanTime();
void showTime(Time );
void main()
{
	Time t1,t2;
	printf("Enter Time 1 details:\n");
	t1=scanTime();
	printf("Enter Time 2 details:\n");
	t2=scanTime();
	printf("Time details are:\n");
	showTime(t1);
	showTime(t2);
}
Time scanTime()
{
	Time temp;
	scanf("%d",&temp.hr);
	scanf("%d",&temp.min);
	scanf("%d",&temp.sec);
	int tsec=temp.hr*3600+temp.min*60+temp.sec;
	temp.hr=tsec/3600;
	temp.min=tsec%3600;
	temp.sec=temp.min%60;
	temp.min=temp.min/60;
	return temp;
}
void showTime(Time t)
{
	printf("Hr:%d\n  Min:%d\n   Sec:%d\n",t.hr,t.min,t.sec);
}