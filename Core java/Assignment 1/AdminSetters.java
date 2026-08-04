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
		System.out.println(this.id);
		System.out.println(this.name);
		System.out.println(this.salary);
		System.out.println(this.allowance);
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

		
	}
}