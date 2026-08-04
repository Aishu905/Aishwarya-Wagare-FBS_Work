class SalesManager
{
	int id;
	String name;
	int salary;
	int target;
	int incentive;
	void setId(int id)
	{
		this.id=id;
	}
	void setName(String name)
	{
		this.name=name;
	}
	void setSalary(int salary)
	{
		this.salary=salary;
	}
	void setTarget(int target)
	{
		this.target=target;
	}
	void setIncentive(int incentive)
	{
		this.incentive=incentive;
	}
	void Display()
	{
		System.out.println(this.id);
		System.out.println(this.name);
		System.out.println(this.salary);
		System.out.println(this.target);
		System.out.println(this.incentive);

	}
}
//SalesManager class ends here
class TestSalesManager
{
	public static void main(String [] args)
	{
		SalesManager s1;//reference
		s1=new SalesManager();
		s1.setId(201);
		s1.setName("Auradha");
		s1.setSalary(40000);
		s1.setTarget(15);
		s1.setIncentive(10000);
		s1.Display();
	}
}