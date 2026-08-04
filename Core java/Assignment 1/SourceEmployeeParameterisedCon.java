class Employee
{
	int id;
	String name;
	int salary;
	Employee (int id,String name,int salary)
	{
		this.id=id;
		this.name=name;
		this.salary=salary;
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
		e1=new Employee(201,"Sarita",45000);
		e1.Display();
	}
}