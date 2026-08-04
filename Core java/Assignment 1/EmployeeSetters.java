class Employee
{
	int id;
	String name;
	int salary;
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
	void Display()
	{
		System.out.println(this.id);
		System.out.println(this.name);
		System.out.println(this.salary);

	}
}
//class ends here
class TestEmployee
{
	public static void main(String[] args)
	{
		Employee e1;//reference
		e1=new Employee();
		e1.setId(101);
		e1.setName("Aishwarya");
		e1.setSalary(35000);
		e1.Display();
	}
}