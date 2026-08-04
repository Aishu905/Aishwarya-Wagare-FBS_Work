class SalesManager
{
	int id;
	String name;
	int salary;
	int target;
	int incentive;
	SalesManager()
	{
		this.id=101;
		this.name="Vaidehi";
		this.salary=50000;
		this.target=100;
		this.incentive=5000;
	}
	void Display()
	{
		System.out.println("Id is : "+this.id);
		System.out.println("Name is: "+this.name);
		System.out.println("Salary is: "+this.salary);
		System.out.println("Target is: "+this.target);
		System.out.println("Incentive is: "+this.incentive);

	}
}
//SalesManager class ends here
class TestSalesManager
{
	public static void main(String [] args)
	{
		SalesManager s1;//reference
		s1=new SalesManager();
		s1.Display();
	}
}