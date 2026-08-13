class Vehicle
{
	int vehicleNumber;
	String model;
	String companyName;
	int noOfWheels;
	double price;
	int getVehicleNumber() {
		return vehicleNumber;
	}
	void setVehicleNumber(int vehicleNumber) {
		this.vehicleNumber = vehicleNumber;
	}
	String getModel() {
		return model;
	}
	void setModel(String model) {
		this.model = model;
	}
	String getCompanyName() {
		return companyName;
	}
	Vehicle(int vehicleNumber, String model, String companyName, int noOfWheels, double price) {
		this.vehicleNumber = vehicleNumber;
		this.model = model;
		this.companyName = companyName;
		this.noOfWheels = noOfWheels;
		this.price = price;
	}
	Vehicle() {
		this.vehicleNumber = 0;
		this.model = "Not Given";
		this.companyName = "Not Given";
		this.noOfWheels = 0;
		this.price = 0;
	}
	void setCompanyName(String companyName) {
		this.companyName = companyName;
	}
	int getNoOfWheels() {
		return noOfWheels;
	}
	void setNoOfWheels(int noOfWheels) {
		this.noOfWheels = noOfWheels;
	}
	double getPrice() {
		return price;
	}
	void setPrice(double price) {
		this.price = price;
	}
	void Display()
	{
		System.out.println("Vehicle number is: "+this.vehicleNumber);
		System.out.println("Model is: "+this.model);
		System.out.println("Company name is: "+this.companyName);
		System.out.println("No of wheels : "+this.noOfWheels);
		System.out.println("Price is: "+this.price);
	}
	void Break()
	{
		System.out.println("Vehicle Break: ");
	}
}

class Bike extends Vehicle
{
	int noOfHelmets;
	int noOfStands;
	String category;
	int getNoOfHelmets() {
		return noOfHelmets;
	}
	void setNoOfHelmets(int noOfHelmets) {
		this.noOfHelmets = noOfHelmets;
	}
	int getNoOfStands() {
		return noOfStands;
	}
	void setNoOfStands(int noOfStands) {
		this.noOfStands = noOfStands;
	}
	String getCategory() {
		return category;
	}
	void setCategory(String category) {
		this.category = category;
	}
	Bike(int vehicleNumber, String model, String companyName, int noOfWheels, double price, int noOfHelmets,
			int noOfStands, String category) {
		super(vehicleNumber, model, companyName, noOfWheels, price);
		this.noOfHelmets = noOfHelmets;
		this.noOfStands = noOfStands;
		this.category = category;
	}
	Bike() {
		super();
		this.noOfHelmets = 0;
		this.noOfStands = 0;
		this.category = "Not Given";
	}
	void Display()
	{
		super.Display();
		System.out.println("No of helmets are:"+this.noOfHelmets);
		System.out.println("No of stands are:"+this.noOfStands);
		System.out.println("Category is: "+this.category);
		System.out.println();
	}
	void Break()
	{
		System.out.println("Bike Break: ");
	}
}

class Car extends Vehicle
{
	double hasPowerSteering;
	String driveMode;
	double parkingAssistantSensor;
	double getHasPowerSteering() {
		return hasPowerSteering;
	}
	void setHasPowerSteering(double hasPowerSteering) {
		this.hasPowerSteering = hasPowerSteering;
	}
	String getDriveMode() {
		return driveMode;
	}
	void setDriveMode(String driveMode) {
		this.driveMode = driveMode;
	}
	double getParkingAssistantSensor() {
		return parkingAssistantSensor;
	}
	void setParkingAssistantSensor(double parkingAssistantSensor) {
		this.parkingAssistantSensor = parkingAssistantSensor;
	}
	Car(int vehicleNumber, String model, String companyName, int noOfWheels, double price, double hasPowerSteering,
			String driveMode, double parkingAssistantSensor) {
		super(vehicleNumber, model, companyName, noOfWheels, price);
		this.hasPowerSteering = hasPowerSteering;
		this.driveMode = driveMode;
		this.parkingAssistantSensor = parkingAssistantSensor;
	}
	Car() {
		super();
		this.hasPowerSteering = 0;
		this.driveMode ="Not Given";
		this.parkingAssistantSensor = 0;
	}
	void Display()
	{
		super.Display();
		System.out.println("Power of Steering is: "+this.hasPowerSteering);
		System.out.println("Drive mode is: "+this.driveMode);
		System.out.println("Parking Assistant Sensor is : "+this.parkingAssistantSensor);
		System.out.println();
	}
	void Break()
	{
		System.out.println("Car Break: ");
	}
}

class Bus extends Vehicle
{
	int passengerCapacity;
	int standingCapacity;
	Bus(int vehicleNumber, String model, String companyName, int noOfWheels, double price, int passengerCapacity,
			int standingCapacity) {
		super(vehicleNumber, model, companyName, noOfWheels, price);
		this.passengerCapacity = passengerCapacity;
		this.standingCapacity = standingCapacity;
	}
	Bus() {
		super();
		this.passengerCapacity = 0;
		this.standingCapacity = 0;
	}
	int getPassengerCapacity() {
		return passengerCapacity;
	}
	void setPassengerCapacity(int passengerCapacity) {
		this.passengerCapacity = passengerCapacity;
	}
	int getStandingCapacity() {
		return standingCapacity;
	}
	void setStandingCapacity(int standingCapacity) {
		this.standingCapacity = standingCapacity;
	}
	void Display()
	{
		super.Display();
		System.out.println("Passenger capacity are: "+this.passengerCapacity);
		System.out.println("Standing capacity are: "+this.standingCapacity);
		System.out.println();
	}
	void Break()
	{
		System.out.println("Bus Break: ");
	}
}

class Test1 {

	public static void main(String[] args) {
		Vehicle[] arr;
		arr=new Vehicle[4];
		arr[0]=new Vehicle(101,"BMW","x5",4,120000);
		arr[1]=new Bike(102,"R15","yamha",2,150000,1,1,"Sports");
		arr[2]=new Car(103,"Hyundai","Creta",4,210000,1,"On",1);
		arr[3]=new Bus(104,"Tata","StarBus",6,1100000,21,25);
		
		for(int i=0;i<arr.length;i++) {
			arr[i].Display();
			arr[i].Break();
		}
	}

}
