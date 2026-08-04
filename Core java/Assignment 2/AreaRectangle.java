class AreaCalculate
{
	void shape(int length,int breadth)
	{
		System.out.println("Area of rectangle is: "+(length*breadth));
	}
}
//class ends here

class TestAreaCalculate
{
	public static void main(String [] args)
	{
		AreaCalculate a1;
		a1=new AreaCalculate();
		a1.shape(7,5);
	}
}