class BankAccount
{
	long accountNumber;
	String holderName;
	double currentBalance;
	double interestRate;
	BankAccount()
	{
		this.accountNumber=12345678;
		this.holderName="Shriya";
		this.currentBalance=4000.00;
		this.interestRate=4.8;
	}
	void Display()
	{
		System.out.println("Account number is: "+this.accountNumber);
		System.out.println(" Holder name is: "+this.holderName);
		System.out.println("Current balance is: "+this.currentBalance);
		System.out.println("Interest rate is : "+this.interestRate);

	}
	
}
class TestBankAccount
{
	public static void main(String [] args)
	{
		BankAccount b1;//reference
		b1=new BankAccount();
		b1.Display();

	}
}