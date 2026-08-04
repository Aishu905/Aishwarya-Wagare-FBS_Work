class HR
{
	int id;
	String name;
	int salary;
	int commission;
	HR(int id,String name,int salary,int commission)
	{
		this.id=id;
		this.name=name;
		this.salary=salary;
		this.commission=commission;
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
		h1=new HR(101,"Sanika",23000,3000);
		h1.Display();
	}
}