#include<stdio.h>
struct time
{
	int hr,min,sec;
	
};
void main()
{
	struct time t1;
	printf("Enter time:");
	t1.hr=2;
	t1.min=50;
	t1.sec=30;
	int tsec=t1.hr*3600+t1.min*60+t1.sec;
	t1.hr=tsec/3600;
	t1.min=tsec%3600;
	t1.sec=t1.min%60;
	t1.min=t1.min/60;
	printf("hr:%d\n",t1.hr);
	printf("min:%d\n",t1.min);
	printf("sec:%d\n",t1.sec);
}