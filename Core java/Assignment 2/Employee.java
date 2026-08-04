class Employee
{
	void loanApprove(int id,String name,int annualSalary)
	{
		if(annualSalary>=12 )
		{
			System.out.println("Loan Amount: 7,00,000");
		}
		else if(annualSalary>=10 && annualSalary<=12)
		{
			System.out.println("Loan Amount: 6,00,000");
		}
		else if(annualSalary>=6 && annualSalary<=10)
		{
			System.out.println("Loan Amount: 5,00,000");
		}
		else if(annualSalary>=4 && annualSalary<=6)
		{
			System.out.println("Loan Amount: 4,00,000");
		}
		else
		{
			System.out.println("Loan not approved!!!!");
		}
	}
}
//class Employee ends here

class TestEmployee
{
	public static void main(String [] args)
	{
		Employee e1;
		e1=new Employee();
		e1.loanApprove(101,"Kavya",4 );
		e1.loanApprove(102,"Aishwarya",12 );
		e1.loanApprove(103,"Aarohi",5 );
		
	}
}