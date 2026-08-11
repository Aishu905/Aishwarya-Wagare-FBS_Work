class ElectricityBill
{
	static double ratePerUnit=9;
	int customerId;
	String customerName;
	int noUnit;
	double totalBill;
	ElectricityBill(int customerId, String customerName, int noUnit) {
		this.customerId = customerId;
		this.customerName = customerName;
		this.noUnit = noUnit;
		
	}
	static double getRatePerUnit() {
		return ratePerUnit;
	}
	static void setRatePerUnit(double ratePerUnit) {
		ElectricityBill.ratePerUnit = ratePerUnit;
	}
	int getCustomerId() {
		return customerId;
	}
	void setCustomerId(int customerId) {
		this.customerId = customerId;
	}
	String getCustomerName() {
		return customerName;
	}
	void setCustomerName(String customerName) {
		this.customerName = customerName;
	}
	int getNoUnit() {
		return noUnit;
	}
	void setNoUnit(int noUnit) {
		this.noUnit = noUnit;
	}
	
	void display()
	{
		System.out.println("Customer id is: "+this.customerId);
		System.out.println("Customer name is: "+this.customerName);
		System.out.println("Number of unit: "+this.noUnit);
		System.out.println("Total Amount of bil is: "+(totalBill=noUnit*ratePerUnit));
		System.out.println();
	}
	
}
class TestElectricityBill {

	public static void main(String[] args) {
		ElectricityBill e1=new ElectricityBill(101,"Aishwarya",10);
		e1.display();
		ElectricityBill e2=new ElectricityBill(102,"Sanika",8);
		e2.display();
		ElectricityBill.setRatePerUnit(23);
		e1.display();
		e2.display();
	}

}
