class PlacedStudent
{
	int frn;
	String studentName;
	int distanceCovered;
	String companyName;
	String designation;
	PlacedStudent(int frn,String studentName,int distanceCovered,String companyName,String designation)
	{
		this.frn=frn;
		this.studentName=studentName;
		this.distanceCovered=distanceCovered;
		this.companyName=companyName;
		this.designation=designation;
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
		p1=new PlacedStudent(005,"kirti",3,"TCS","data entry");
		p1.Display();
	}
}