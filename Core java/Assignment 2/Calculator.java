class Calculator
{
	void add(int a,int b)
	{
		System.out.println(a+b);
		
	}
	void add(double c,int d)
	{
		System.out.println(c+d);
	}
	void add(int e,double f)
	{
		System.out.println(e+f);
	}
	void add(double g,double h)
	{
		System.out.println(g+h);
	}

}//class Calculator ends here

class TestCalculator
{
	public static void main(String [] args)
	{
		Calculator c1;//reference
		c1=new Calculator();
		c1.add(10,20);
		c1.add(20.5,10);
		c1.add(5,9.3);
		c1.add(2.5,2.5);
	}
}