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
		System.out.println(this.accountNumber);
		System.out.println(this.holderName);
		System.out.println(this.currentBalance);
		System.out.println(this.interestRate);

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
		b1.Display();

	}
}