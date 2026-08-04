class Student
{
	int frn;
	String studentName;
	int distanceCovered;
	void SetFrn(int frn)
	{
		this.frn=frn;
	}
	void SetStudentName(String studentName)
	{
		this.studentName=studentName;
	}
	void SetDistanceCovered(int distanceCovered)
	{
		this.distanceCovered=distanceCovered;
	}
	void Display()
	{
		System.out.println("Frn is: "+this.frn);
		System.out.println("Student name is: "+this.studentName);
		System.out.println("Distance covered is: "+this.distanceCovered);
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
 
}
// Student class ends here
class TestStudent
{
	public static void main(String [] args)
	{
		Student s1;//reference
		s1=new Student();
		s1.SetFrn(005);
		s1.SetStudentName("Aishwarya");
		s1.SetDistanceCovered(5);
		int x=s1.getFrn();
		String str=s1.getStudentName();
		int y=s1.getDistanceCovered();
		s1.Display();
	
	}
		
}