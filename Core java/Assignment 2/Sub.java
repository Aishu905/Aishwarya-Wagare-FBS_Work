class Calculator
{
	void sub(int a,int b)
	{
		System.out.println("sub: "+(a-b));
	}
	void sub(int a,double b)
	{
		System.out.println("sub: "+(a-b));
	}
	void sub(double a,int b)
	{
		System.out.println("sub: "+(a-b));
	}
	void sub(double a,double b)
	{
		System.out.println("sub: "+(a-b));
	}
}
//class Calculator ends here
class TestCalculator
{
	public static void main(String [] args)
	{
		Calculator c1;
		c1=new Calculator();
		c1.sub(10,10);
		c1.sub(20,10.5);
		c1.sub(30.5,10);
		c1.sub(15.5,10.5);
	}
}