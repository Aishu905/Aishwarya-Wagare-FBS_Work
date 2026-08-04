class BankAccount
{
	long accountNumber;
	String holderName;
	double currentBalance;
	double interestRate;
	void setAccountNo(long accountNumber)
	{
		this.accountNumber=accountNumber;
	}
	void setHolderName(String holderName)
	{
		this.holderName=holderName;
	}
	void setCurrentBal(double currentBalance)
	{
		this.currentBalance=currentBalance;
	}
	void setInterestRate(double interestRate )
	{
		this.interestRate=interestRate;
	}
	void Display()
	{
		System.out.println("Account number is: "+this.accountNumber);
		System.out.println(" Holder name is: "+this.holderName);
		System.out.println("Current balance is: "+this.currentBalance);
		System.out.println("Interest rate is : "+this.interestRate);

	}
	long getAccountNo()
	{
		return this.accountNumber;
	}
	String getHolderName()
	{
		return this.holderName;
	}
	double getCurrentBal()
	{
		return this.currentBalance;
	}
	double getInterestRate()
	{
		return this.interestRate;
	}

}
class TestBankAccount
{
	public static void main(String [] args)
	{
		BankAccount b1;//reference
		b1=new BankAccount();
		b1.setAccountNo(987654321);
		b1.setHolderName("Aishwarya Wagare");
		b1.setCurrentBal(5000.00);
		b1.setInterestRate(3.5);
		long x=b1.getAccountNo();
		String str=b1.getHolderName();
		double y=b1.getCurrentBal();
		double z=b1.getInterestRate();
		b1.Display();

	}
}