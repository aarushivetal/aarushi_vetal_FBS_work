package inheritance;

class Shape {

    double area;

    void display() {
        System.out.println("Area = " + area);
    }
}

class Circle extends Shape {

    double radius;

    Circle(double radius) {
        this.radius = radius;
        area = 3.14 * radius * radius;
    }

    void display() {
        System.out.println("Radius = " + radius);
        System.out.println("Area of Circle = " + area);
    }
}

class Triangle extends Shape {

    double base;
    double height;

    Triangle(double base, double height) {
        this.base = base;
        this.height = height;
        area = 0.5 * base * height;
    }

    void display() {
        System.out.println("Base = " + base);
        System.out.println("Height = " + height);
        System.out.println("Area of Triangle = " + area);
    }
}

class Rectangle extends Shape {

    double length;
    double breadth;

    Rectangle(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
        area = length * breadth;
    }

    void display() {
        System.out.println("Length = " + length);
        System.out.println("Breadth = " + breadth);
        System.out.println("Area of Rectangle = " + area);
    }
}


class TestShape {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Circle c = new Circle(7);
        Triangle t = new Triangle(10, 5);
        Rectangle r = new Rectangle(8, 4);

        c.display();

        System.out.println();

        t.display();

        System.out.println();

        r.display();

	}

}
