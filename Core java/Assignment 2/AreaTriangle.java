class AreaCalculate
{
	void shape(int base,int height)
	{
		System.out.println("Area of triangle is: "+(0.5*base*height));
	}
}
//class ends here
class TestAreaCalculator
{
	public static void main(String[]args)
	{
		AreaCalculate a1;
		a1=new AreaCalculate();
		a1.shape(4,7);
	}
}