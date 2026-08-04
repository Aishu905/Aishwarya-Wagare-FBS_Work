class Student
{
	int frn;
	String studentName;
	int distanceCovered;
	Student(int frn,String studentName,int distanceCovered)
	{
		this.frn=frn;
		this.studentName=studentName;
		this.distanceCovered=distanceCovered;
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
		s1=new Student(001,"Vaidehi",5);
		s1.Display();
	
	}
		
}