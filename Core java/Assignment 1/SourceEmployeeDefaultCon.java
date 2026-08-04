class Employee
{
	int id;
	String name;
	int salary;
	Employee ()
	{
		this.id=11;
		this.name="Anita";
		this.salary=45000;
	}
	void Display()
	{
		System.out.println("Id is: "+ this.id);
		System.out.println("Name is: "+this.name);
		System.out.println("Salart is: "+this.salary);

	}
}
//class ends here
class TestEmployee
{
	public static void main(String[] args)
	{
		Employee e1;//reference
		e1=new Employee();
		e1.Display();
	}
}