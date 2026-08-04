class AreaCalculate
{
	void shape(double radius)
	{
		System.out.println("Area of circle is: "+(3.14*radius*radius));
	}
}
//class ends here

class TestAreaCalculate
{
	public static void main(String [] args)
	{
		AreaCalculate a1;
		a1=new AreaCalculate();
		a1.shape(4.5);
	}
}