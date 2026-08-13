class Food
{
	String name;
	double price;
	String category;
	int quantity;
	Food(String name, double price, String category, int quantity) {
		this.name = name;
		this.price = price;
		this.category = category;
		this.quantity = quantity;
	}
	Food() {
		this.name = "Not Given";
		this.price = 0;
		this.category = "Not Given";
		this.quantity = 0;
	}
	String getName() {
		return name;
	}
	void setName(String name) {
		this.name = name;
	}
	double getPrice() {
		return price;
	}
	void setPrice(double price) {
		this.price = price;
	}
	String getCategory() {
		return category;
	}
	void setCategory(String category) {
		this.category = category;
	}
	int getQuantity() {
		return quantity;
	}
	void setQuantity(int quantity) {
		this.quantity = quantity;
	}
	void Display()
	{
		System.out.println("Food name is: "+this.name);
		System.out.println("Food price is: "+this.price);
		System.out.println("Category is: "+this.category);
		System.out.println("Quantity are: "+this.quantity);
	}
}

class Pizza extends Food
{
	String topping;
	String size;
	String crustType;
	Pizza(String name, double price, String category, int quantity, String topping, String size, String crustType) {
		super(name, price, category, quantity);
		this.topping = topping;
		this.size = size;
		this.crustType = crustType;
	}
	Pizza() {
		super();
		this.topping = "Not Given";
		this.size = "Not Given";
		this.crustType = "Not Given";
	}
	String getTopping() {
		return topping;
	}
	void setTopping(String topping) {
		this.topping = topping;
	}
	String getSize() {
		return size;
	}
	void setSize(String size) {
		this.size = size;
	}
	String getCrustType() {
		return crustType;
	}
	void setCrustType(String crustType) {
		this.crustType = crustType;
	}
	void Display()
	{
		super.Display();
		System.out.println("Pizza topping are: "+this.topping);
		System.out.println("Pizza Size are: "+this.size);
		System.out.println("Pizza CrustType are: "+this.crustType);
		System.out.println();
	}
}
class Test7 {

	public static void main(String[] args) {
		Food f1=new Food("Burger",300,"FastFood",2);
		f1.Display();

		Pizza p1=new Pizza("Margernita",400,"FastFood",4,"Corn","Large","Cheese");
		p1.Display();
	}

}
