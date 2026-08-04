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
		System.out.println(this.frn);
		System.out.println(this.studentName);
		System.out.println(this.distanceCovered);

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
		s1.Display();
	
	}
}