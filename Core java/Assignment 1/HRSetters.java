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
		System.out.println(this.id);
		System.out.println(this.name);
		System.out.println(this.salary);
		System.out.println(this.commission);

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
	}
}