class Employee
{
	int id;
	String name;
	int salary;
	Employee (int id,String name,int salary)
	{
		this.id=id;
		this.name=name;
		this.salary=salary;
	}
	Employee ()
	{
		this.id=0;
		this.name="Not Given";
		this.salary=0;
	}
	int getId() {
		return id;
	}
	void setId(int id) {
		this.id = id;
	}
	String getName() {
		return name;
	}
	void setName(String name) {
		this.name = name;
	}
	int getSalary() {
		return salary;
	}
	void setSalary(int salary) {
		this.salary = salary;
	}
	void Display()
	{
		System.out.println("Id is: "+ this.id);
		System.out.println("Name is: "+this.name);
		System.out.println("Salary is: "+this.salary);

	}
}
//class ends here

class HR extends Employee
{
	int commission;
	HR(int id,String name,int salary,int commission)
	{
		super(id,name,salary);
		this.commission=commission;
	}
	int getCommission() {
		return commission;
	}
	void setCommission(int commission) {
		this.commission = commission;
	}
	HR()
	{
		super();
		this.commission=0;
	}
	void Display()
	{
		super.Display();
		System.out.println("Commission is: "+this.commission);
		System.out.println();

	}
}
//class HR ends here

class Admin extends Employee
{
	int allowance;
	Admin(int id,String name,int salary,int allowance)
	{
		super(id,name,salary);
		this.allowance=allowance;
	}
	Admin()
	{
		super();
		this.allowance=0;
	}
	int getAllowance() {
		return allowance;
	}
	void setAllowance(int allowance) {
		this.allowance = allowance;
	}
	void Display()
	{
		super.Display();
		System.out.println("Allowance is : "+this.allowance);
		System.out.println();
	}
}
//Admin class ends here

class SalesManager extends Employee
{
	
	int target;
	int incentive;
	SalesManager(int id,String name,int salary,int target,int incentive)
	{
		super(id,name,salary);
		this.target=target;
		this.incentive=incentive;
	}
	SalesManager()
	{
		super();
		this.target=0;
		this.incentive=0;
	}
	int getTarget() {
		return target;
	}
	void setTarget(int target) {
		this.target = target;
	}
	int getIncentive() {
		return incentive;
	}
	void setIncentive(int incentive) {
		this.incentive = incentive;
	}
	void Display()
	{
		super.Display();
		System.out.println("Target is: "+this.target);
		System.out.println("Incentive is: "+this.incentive);
		System.out.println();

	}
}
//SalesManager class ends here

class Test {

	public static void main(String[] args) {
		Employee e1=new Employee(201,"Sarita",45000);
		e1.Display();
		
		HR h1=new HR(101,"Sanika",23000,3000);
		h1.Display();
		
		Admin a1=new Admin(201,"Rohini",25000,3000);
		a1.Display();
		
		SalesManager s1=new SalesManager(110,"Aarati",34000,34,3000);
		s1.Display();
		
	}

}
