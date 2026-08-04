class Admin
{
	int id;
	String name;
	int salary;
	int allowance;
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
	void setAllowance(int allowance)
	{
		this.allowance=allowance;	
	}
	void Display()
	{
		System.out.println("Id is : "+this.id);
		System.out.println("Name is: "+this.name);
		System.out.println("Salary is: "+this.salary);
		System.out.println("Allowance is : "+this.allowance);
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
	int getAllowance()
	{
		return this.allowance;
	}
}
//Admin class ends here
class TestAdmin
{
	public static void main(String [] args)
	{
		Admin a1;//reference
		a1=new Admin();
		a1.setId(101);
		a1.setName("Aishwarya");
		a1.setSalary(50000);
		a1.setAllowance(5000);
		a1.Display();
		int x=a1.getId();
		String str=a1.getName();
		int y=a1.getSalary();
		int z=a1.getAllowance();

		
	}
}