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
		System.out.println("FRN is: "+this.frn);
		System.out.println("Student name is: "+this.studentName);
		System.out.println("Distance covered is: "+this.distanceCovered);
		System.out.println("Company name is: "+this.companyName);
		System.out.println("Designation is: "+this.designation);

	}
	int getFrn()
	{
		return this.frn;
	}
	String getStudentName()
	{
		return this.studentName;
	}
	int getDistanceCovered()
	{
		return this.distanceCovered;
	}
	String getCompanyName()
	{
		return this.companyName;
	}
	String getDesignation()
	{
		return this.designation;
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
		int x=p1.getFrn();
		String str=p1.getStudentName();
		int y=p1.getDistanceCovered();
		String ptr=p1.getCompanyName();
		String str1=p1.getDesignation();
	}
}