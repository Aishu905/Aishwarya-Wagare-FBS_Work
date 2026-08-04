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
		System.out.println("Id is : "+this.id);
		System.out.println("Name is: "+this.name);
		System.out.println("Salary is: "+this.salary);
		System.out.println("Target is: "+this.target);
		System.out.println("Incentive is: "+this.incentive);

	}
	int getId()
	{
		return this.id;
	}
	String getName()
	{
		return this.name;
	}
	int getSalary()
	{
		return this.salary;
	}
	int getTarget()
	{
		return this.target;
	}
	int getIncentive()
	{
		return this.incentive;
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
		s1.setIncentive(1000);
		int x=s1.getId();
		String str=s1.getName();
		int y=s1.getSalary();
		int z=s1.getTarget();
		int a=s1.getIncentive();
		s1.Display();
	}
}