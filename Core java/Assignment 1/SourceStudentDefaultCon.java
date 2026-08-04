class Student
{
	int frn;
	String studentName;
	int distanceCovered;
	Student()
	{
		this.frn=1112;
		this.studentName="Pratiksha";
		this.distanceCovered=3;
	}
	void Display()
	{
		System.out.println("Frn is: "+this.frn);
		System.out.println("Student name is: "+this.studentName);
		System.out.println("Distance covered is: "+this.distanceCovered);
	}
	 
}
// Student class ends here
class TestStudent
{
	public static void main(String [] args)
	{
		Student s1;//reference
		s1=new Student();
		s1.Display();
	
	}
		
}