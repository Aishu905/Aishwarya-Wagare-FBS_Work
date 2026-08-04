class Student
{
	void approveLoan(int rollNo,String name,double percentage)
	{	
		if(percentage>=80)
		{
			System.out.println("Loan Amount: 2,00,000");
		}
		else if(percentage>=60 && percentage<=80)
		{
			System.out.println("Loan Amount: 1,00,000");
		}
		else if(percentage>=40 && percentage<=60)
		{
			System.out.println("Loan Amount: 50,000");
		}
		else
		{
			System.out.println("Loan not approved!!!");
		}
	}
}
//class ends here

class TestStudent
{
	public static void main(String [] args)
	{
		Student s1;
		s1=new Student();
		s1.approveLoan(10,"Aishwarya",80);
		s1.approveLoan(11,"Sandhya",35);

	}
}