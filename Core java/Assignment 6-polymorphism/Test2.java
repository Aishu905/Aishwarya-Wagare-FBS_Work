class Shape
{
	double area;

	double getArea() {
		return area;
	}

	void setArea(double area) {
		this.area = area;
	}
	void Display()
	{
		System.out.println("This is an shape");
	}	
	 double calculateArea()
	 {
		 return this.area;
	 }
}

class Triangle extends Shape
{
	int height;
	int base;

	int getHeight() {
		return height;
	}
	void setHeight(int height) {
		this.height = height;
	}
	int getBase() {
		return base;
	}
	void setBase(int base) {
		this.base = base;
	}
	Triangle(int height, int base) {
		super();
		this.height = height;
		this.base = base;
	}
	Triangle() {
		super();
		this.height = 0;
		this.base = 0;
	}
	void Display()
	{
		super.Display();
		System.out.println("Triangle is a shape :");
		System.out.println();
	}
	double calculateArea()
	 {
		 return this.area=0.5*this.base*this.height;
	 }
}

class Circle extends Shape
{
	double radius;

	double getRadius() {
		return radius;
	}

	void setRadius(double radius) {
		this.radius = radius;
	}

	Circle(double radius) {
		super();
		this.radius = radius;
	}
	Circle() {
		super();
		this.radius = 0;
	}
	void Display()
	{
		super.Display();
		System.out.println("Circle is shape: ");
		System.out.println();
	}
	double calculateArea()
	 {
		 return this.area=3.14*this.radius*this.radius;
	 }
}

class Rectangle extends Shape
{
	int length;
	int width;
	int getLength() {
		return length;
	}
	void setLength(int length) {
		this.length = length;
	}
	int getWidth() {
		return width;
	}
	void setWidth(int width) {
		this.width = width;
	}
	Rectangle(int length, int width) {
		super();
		this.length = length;
		this.width = width;
	}
	Rectangle() {
		super();
		this.length = 0;
		this.width = 0;
	}
	void Display()
	{
		super.Display();
		System.out.println("Rectangle is a shape: ");
		System.out.println();
	}
	double calculateArea()
	 {
		 return this.area=this.length*this.width;
	 }
}

class Test2 {

	public static void main(String[] args) {
		Shape[] arr=new Shape[3];
		arr[0]=new Triangle(5,4);
		arr[1]=new Circle(4);
		arr[2]=new Rectangle(5,4);
		
		for(int i=0;i<arr.length;i++)
		{
			arr[i].Display();
			System.out.println(arr[i].calculateArea());
		}
		

	}

}
