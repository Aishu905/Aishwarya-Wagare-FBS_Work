class Calculator
{
	void div(int a,int b)
	{
		System.out.println("div: "+(a/b));
	}
	void div(int a,double b)
	{
		System.out.println("div: "+(a/b));
	}
	void div(double a,int b)
	{
		System.out.println("div: "+(a/b));
	}
	void div(double a,double b)	
	{
		System.out.println("div: "+(a/b));
	}
}
//class Calculator ends here
class TestCalculator
{
	public static void main(String [] args)
	{
		Calculator c1;
		c1=new Calculator();
		c1.div(12,4);
		c1.div(20,4.5);
		c1.div(50.5,25);
		c1.div(25.5,25.5);
	}
}