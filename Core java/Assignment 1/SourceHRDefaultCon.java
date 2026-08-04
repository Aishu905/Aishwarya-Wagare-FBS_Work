class HR
{
	int id;
	String name;
	int salary;
	int commission;
	HR()
	{
		this.id=501;
		this.name="Srushti";
		this.salary=39000;
		this.commission=1100;
	}
	void Display()
	{
		System.out.println("Id is: "+this.id);
		System.out.println("Name is: "+this.name);
		System.out.println("Salary is: "+this.salary);
		System.out.println("Commission is: "+this.commission);

	}
}
//class HR ends here
class TestHr
{
	public static void main(String[]args)
	{
		HR h1;//reference
		h1=new HR();
		h1.Display();
	}
}