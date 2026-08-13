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
		System.out.println("Triangle is a shape :"+(area=0.5*height*base));
		System.out.println();
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
		System.out.println("Circle is shape: "+(area=3.14*radius*radius));
		System.out.println();
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
		System.out.println("Rectangle is a shape: "+(area=length*width));
		System.out.println();
	}
}
class Test3 {

	public static void main(String[] args) {
		Shape s=new Shape();
		//s.Display();

		Triangle t=new Triangle(5,3);
		t.Display();
		
		Circle c=new Circle(3);
		c.Display();
		
		Rectangle r=new Rectangle(5,4);
		r.Display();
	}

}
