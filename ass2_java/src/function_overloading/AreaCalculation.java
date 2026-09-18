package function_overloading;

class Triangle
{
    double base;
    double height;

    Triangle(double b, double h)
    {
        base = b;
        height = h;
    }
}

class Rectangle
{
    double length;
    double breadth;

    Rectangle(double l, double b)
    {
        length = l;
        breadth = b;
    }
}

class Circle
{
    double radius;

    Circle(double r)
    {
        radius = r;
    }
}

class Shape
{
    void calculateArea(Triangle t)
    {
        double area = 0.5 * t.base * t.height;
        System.out.println("Area of Triangle = " + area);
    }

    void calculateArea(Rectangle r)
    {
        double area = r.length * r.breadth;
        System.out.println("Area of Rectangle = " + area);
    }

    void calculateArea(Circle c)
    {
        double area = 3.14 * c.radius * c.radius;
        System.out.println("Area of Circle = " + area);
    }
}

public class AreaCalculation {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Shape s1 = new Shape();

        Triangle t1 = new Triangle(10, 5);
        Rectangle r1 = new Rectangle(8, 4);
        Circle c1 = new Circle(7);

        s1.calculateArea(t1);
        s1.calculateArea(r1);
        s1.calculateArea(c1);

	}

}
