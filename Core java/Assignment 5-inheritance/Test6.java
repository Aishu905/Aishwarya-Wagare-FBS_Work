class Doctor
{
	String name;
	int age;
	String specialization;
	String hospitalName;
	Doctor(String name, int age, String specialization, String hospitalName) {
		this.name = name;
		this.age = age;
		this.specialization = specialization;
		this.hospitalName = hospitalName;
	}
	Doctor() {
		this.name = "Not Given";
		this.age = 0;
		this.specialization = "Not Given";
		this.hospitalName = "Not Given";
	}
	String getName() {
		return name;
	}
	void setName(String name) {
		this.name = name;
	}
	int getAge() {
		return age;
	}
	void setAge(int age) {
		this.age = age;
	}
	String getSpecialization() {
		return specialization;
	}
	void setSpecialization(String specialization) {
		this.specialization = specialization;
	}
	String getHospitalName() {
		return hospitalName;
	}
	void setHospitalName(String hospitalName) {
		this.hospitalName = hospitalName;
	}
	void Display()
	{
		System.out.println("Name is: "+this.name);
		System.out.println("Age is: "+this.age);
		System.out.println("Specialization is: "+this.specialization);
		System.out.println("Hospital Name is: "+this.hospitalName);
	}
}

class Surgeon extends Doctor
{
	String surgeryType;
	int experience;
	int noOfSurgery;
	Surgeon(String name, int age, String specialization, String hospitalName, String surgeryType, int experience,
			int noOfSurgery) {
		super(name, age, specialization, hospitalName);
		this.surgeryType = surgeryType;
		this.experience = experience;
		this.noOfSurgery = noOfSurgery;
	}
	Surgeon() {
		super();
		this.surgeryType = "Not Given";
		this.experience = 0;
		this.noOfSurgery = 0;
	}

	String getSurgeryType() {
		return surgeryType;
	}
	void setSurgeryType(String surgeryType) {
		this.surgeryType = surgeryType;
	}
	int getExperience() {
		return experience;
	}
	void setExperience(int experience) {
		this.experience = experience;
	}
	int getNoOfSurgery() {
		return noOfSurgery;
	}
	void setNoOfSurgery(int noOfSurgery) {
		this.noOfSurgery = noOfSurgery;
	}
	void Display()
	{
		super.Display();
		System.out.println("Surgery type is: "+this.surgeryType);
		System.out.println("Experience is: "+this.experience);
		System.out.println("No of surgery are: "+this.noOfSurgery);
		System.out.println();
	}

}
class Test6 {

	public static void main(String[] args) {
		
		Doctor d1=new Doctor("Priya Bharti",32,"Dentist","CPR");
		d1.Display();
		
		Surgeon s1=new Surgeon("Amol dethe",45,"Surgiest","City Hospital","Major",10,50);
		s1.Display();
	}

}
