class Time
{
	int hr,min,sec;
	Time(int hr,int min,int sec)
	{
		this.hr=hr;
		this.min=min;
		this.sec=sec;
	}
	void add(Time t)
	{
		int totalSec=this.sec+t.sec;
		 sec=totalSec%60;
		int carrySec=totalSec/60;

		int totalMin=this.min+t.min+carrySec;
		min=totalMin%60;
		int carryMin=totalMin/60;

		int totalHr=this.hr+t.hr+carryMin;
		hr=totalHr%24;

		System.out.println("Addition of Time 1 and 2 is: "+hr+":"+min+":"+sec);
	}
	void add(int h)
	{
		 hr=(hr+h)%24;
		System.out.println("After adding hour: "+hr+":"+min+":"+sec);
	}
	void add(int h,int m)
	{
		int totalMin=min+m;
		int carryMin=totalMin/60;
		min=totalMin%60;
		hr=(hr+h+carryMin)%24;
		System.out.println("After adding minutes: "+hr+":"+min+":"+sec);
	}
	void add(int h,int m,int s)
	{
		int totalSec=sec+s;
		int carrySec=totalSec/60;
		sec=totalSec%60;
		
		int totalMin=min+m+carrySec;
		int carryMin=totalMin/60;
		min=totalMin%60;
	
		hr=(hr+h+carryMin)%24;

		System.out.println("After adding seconds: "+hr+":"+min+":"+sec);
		
	}
}
//class Time ends here

class TestTime
{
	public static void main(String [] args)
	{
		Time t1;
		t1=new Time(5,20,61);
		Time t2;
		t2=new Time(2,70,20);
		t1.add(t2);
		t1.add(5);
		t1.add(0,5);
		t1.add(0,0,56);
				
	}
}