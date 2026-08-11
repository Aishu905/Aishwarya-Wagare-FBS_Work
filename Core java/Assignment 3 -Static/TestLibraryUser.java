class LibraryUser
{
	String userName;
	int noOfDays;
	static double fine=100;
	double totalFine;
	
	String getUserName() {
		return userName;
	}

	void setUserName(String userName) {
		this.userName = userName;
	}

	int getNoOfDays() {
		return noOfDays;
	}

	void setNoOfDays(int noOfDays) {
		this.noOfDays = noOfDays;
	}

	static double getFin() {
		return fine;
	}

	static void setFin(double fin) {
		LibraryUser.fine = fin;
	}

	double getTotalFine() {
		return totalFine;
	}

	void setTotalFine(double totalFine) {
		this.totalFine = totalFine;
	}

	LibraryUser(String userName, int noOfDays) {
		this.userName = userName;
		this.noOfDays = noOfDays;	
	}
	void display()
	{
		System.out.println("User Name is: "+this.userName);
		System.out.println("No of days: "+this.noOfDays);
		System.out.println("Total fine is: "+(totalFine=noOfDays*fine));
		System.out.println();
	}
}
class TestLibraryUser {

	public static void main(String[] args) {
		LibraryUser l1=new LibraryUser("Kirti",5);
		l1.display();
		LibraryUser l2=new LibraryUser("Priti",7);
		l2.display();
		
		LibraryUser.setFin(150);
		l1.display();
		l2.display();
	}

}
