class SalesManager
{
	int id;
	String name;
	int salary;
	int target;
	int incentive;
	SalesManager(int id,String name,int salary,int target,int incentive)
	{
		this.id=id;
		this.name=name;
		this.salary=salary;
		this.target=target;
		this.incentive=incentive;
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
		s1=new SalesManager(110,"Aarati",34000,34,3000);
		s1.Display();
	}
}