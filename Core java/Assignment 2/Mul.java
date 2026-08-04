class Calculator
{
	void mul(int a,int b)
	{
		System.out.println("mul: "+(a*b));
	}
	void mul(int a,double b)
	{
		System.out.println("mul: "+(a*b));
	}
	void mul(double a,int b)
	{
		System.out.println("mul: "+(a*b));
	}
	void mul(double a,double b)
	{
		System.out.println("mul: "+(a*b));
	}
}
//Calculator class ends here
class TestCalculator
{
	public static void main(String[] args)
	{
		Calculator c1;
		c1=new Calculator();
		c1.mul(5,4);
		c1.mul(5,5.5);
		c1.mul(6.5,3);
		c1.mul(2.5,2.5);
	}
}