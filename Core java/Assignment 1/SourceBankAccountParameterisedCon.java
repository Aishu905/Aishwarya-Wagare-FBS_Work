class BankAccount
{
	long accountNumber;
	String holderName;
	double currentBalance;
	double interestRate;
	BankAccount(long accountNumber,String holderName,double currentBalance,double interestRate)
	{
		this.accountNumber=accountNumber;
		this.holderName=holderName;
		this.currentBalance=currentBalance;
		this.interestRate=interestRate;
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
		b1=new BankAccount(56783214,"Kranti",54000,3);
		b1.Display();

	}
}