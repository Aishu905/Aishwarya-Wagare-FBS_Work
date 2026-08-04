class Admin
{
	int id;
	String name;
	int salary;
	int allowance;
	Admin(int id,String name,int salary,int allowance)
	{
		this.id=id;
		this.name=name;
		this.salary=salary;
		this.allowance=allowance;
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
		a1=new Admin(201,"Rohini",25000,3000);
		a1.Display();

	}
}