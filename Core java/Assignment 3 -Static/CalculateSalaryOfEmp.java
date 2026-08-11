class Emp
{
	String empName;
	double salary;
	static double bonus=10;
	double totalSalary;
	Emp(String empName, double salary) {
		super();
		this.empName = empName;
		this.salary = salary;
	}
	String getEmpName() {
		return empName;
	}
	void setEmpName(String empName) {
		this.empName = empName;
	}
	double getSalary() {
		return salary;
	}
	void setSalary(double salary) {
		this.salary = salary;
	}
	static double getBonus() {
		return bonus;
	}
	static void setBonus(double bonus) {
		Emp.bonus = bonus;
	}
	void display()
	{
		System.out.println("Employee name: "+this.empName);
		System.out.println("Salary is: "+this.salary);
		System.out.println("Total salary is: "+(salary+(salary*bonus/100)));
		System.out.println();
	}
	
}
class CalculateSalaryOfEmp {

	public static void main(String[] args) {
		Emp e1=new Emp("Aishwarya",30000);
		e1.display();
		Emp e2=new Emp("Pradnya",45000);
		e2.display();
		Emp.setBonus(30);
		e1.display();
		e2.display();
	}

}
