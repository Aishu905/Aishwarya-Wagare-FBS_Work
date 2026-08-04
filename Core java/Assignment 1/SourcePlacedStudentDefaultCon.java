class PlacedStudent
{
	int frn;
	String studentName;
	int distanceCovered;
	String companyName;
	String designation;
	PlacedStudent()
	{
		this.frn=001;
		this.studentName="priti";
		this.distanceCovered=5;
		this.companyName="wipro";
		this.designation="developer";
	}
	void Display()
	{
		System.out.println("FRN is: "+this.frn);
		System.out.println("Student name is: "+this.studentName);
		System.out.println("Distance covered is: "+this.distanceCovered);
		System.out.println("Company name is: "+this.companyName);
		System.out.println("Designation is: "+this.designation);

	}
}
//class ends here
class TestPlacedStudent
{
	public static void main(String [] args)
	{
		PlacedStudent p1;//reference
		p1=new PlacedStudent();
		p1.Display();
	}
}