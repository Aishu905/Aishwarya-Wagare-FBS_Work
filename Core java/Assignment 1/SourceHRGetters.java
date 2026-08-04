class HR
{
	int id;
	String name;
	int salary;
	int commission;
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
	void setCommission(int commission)
	{
		this.commission=commission;
	}
	void Display()
	{
		System.out.println("Id is: "+this.id);
		System.out.println("Name is: "+this.name);
		System.out.println("Salary is: "+this.salary);
		System.out.println("Commission is: "+this.commission);

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
	int getCommission()
	{
		return this.commission;
	}
}
//class HR ends here
class TestHr
{
	public static void main(String[]args)
	{
		HR h1;//reference
		h1=new HR();
		h1.setId(101);
		h1.setName("Anita");
		h1.setSalary(35000);
		h1.setCommission(7000);
		h1.Display();
		int x=h1.getId();
		String str=h1.getName();
		int y=h1.getSalary();
		int z=h1.getCommission();
	}
}