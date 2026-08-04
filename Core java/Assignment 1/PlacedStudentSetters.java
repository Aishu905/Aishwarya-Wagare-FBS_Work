class PlacedStudent
{
	int frn;
	String studentName;
	int distanceCovered;
	String companyName;
	String designation;
	void setFrn(int frn)
	{
		this.frn=frn;
	}
	void setStudentName(String studentName)
	{
		this.studentName=studentName;
	}
	void setDistanceCovered(int distanceCovered)
	{
		this.distanceCovered=distanceCovered;
	}
	void setCompanyName(String companyName)
	{
		this.companyName=companyName;
	}
	void setDesignation(String designation)
	{
		this.designation=designation;
	}
	void Display()
	{
		System.out.println(this.frn);
		System.out.println(this.studentName);
		System.out.println(this.distanceCovered);
		System.out.println(this.companyName);
		System.out.println(this.designation);

	}
}
//class ends here
class TestPlacedStudent
{
	public static void main(String [] args)
	{
		PlacedStudent p1;//reference
		p1=new PlacedStudent();
		p1.setFrn(006);
		p1.setStudentName("Komal");
		p1.setDistanceCovered(5);
		p1.setCompanyName("TCS");
		p1.setDesignation("java developer");
		p1.Display();
	}
}