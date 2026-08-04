class Admin
{
	int id;
	String name;
	int salary;
	int allowance;
	Admin()
	{
		this.id=201;
		this.name="kavya";
		this.salary=20000;
		this.allowance=5000;
	}
	void Display()
	{
		System.out.println("Id is : "+this.id);
		System.out.println("Name is: "+this.name);
		System.out.println("Salary is: "+this.salary);
		System.out.println("Allowance is : "+this.allowance);
	}
}
//Admin class ends here
class TestAdmin
{
	public static void main(String [] args)
	{
		Admin a1;//reference
		a1=new Admin();
		a1.Display();

	}
}