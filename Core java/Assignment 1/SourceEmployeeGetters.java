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
		System.out.println("Id is: "+ this.id);
		System.out.println("Name is: "+this.name);
		System.out.println("Salart is: "+this.salary);

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
		int x=e1.getId();
		String str=e1.getName();
		int y=e1.getSalary();
	}
}