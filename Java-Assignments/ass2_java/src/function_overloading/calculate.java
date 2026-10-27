package function_overloading;

class calculator
{
	void add(int a, int b)
	{
		System.out.println("Addition = " + (a + b));
	}
	
	void add(double a,double b)
	{
		System.out.println("Addition = " + (a + b));
	}
	
	void add(int a, double b)
    {
        System.out.println("Addition = " + (a + b));
    }

    void add(double a, int b)
    {
        System.out.println("Addition = " + (a + b));
    }
    
    void sub(int a, int b)
    {
        System.out.println("Subtraction = " + (a - b));
    }

    void sub(double a, double b)
    {
        System.out.println("Subtraction = " + (a - b));
    }

    void sub(int a, double b)
    {
        System.out.println("Subtraction = " + (a - b));
    }

    void sub(double a, int b)
    {
        System.out.println("Subtraction = " + (a - b));
    }
    
    void mul(int a, int b)
    {
        System.out.println("Multiplication = " + (a * b));
    }

    void mul(double a, double b)
    {
        System.out.println("Multiplication = " + (a * b));
    }

    void mul(int a, double b)
    {
        System.out.println("Multiplication = " + (a * b));
    }

    void mul(double a, int b)
    {
        System.out.println("Multiplication = " + (a * b));
    }
    
    void div(int a, int b)
    {
        System.out.println("Division = " + (a / b));
    }

    void div(double a, double b)
    {
        System.out.println("Division = " + (a / b));
    }

    void div(int a, double b)
    {
        System.out.println("Division = " + (a / b));
    }

    void div(double a, int b)
    {
        System.out.println("Division = " + (a / b));
    }

}

public class calculate {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		calculator c1 = new calculator();

        System.out.println("Addition");
        c1.add(10, 20);
        c1.add(10.5, 20.5);
        c1.add(10, 20.5);
        c1.add(10.5, 20);

        System.out.println("\nSubtraction");
        c1.sub(20, 10);
        c1.sub(20.5, 10.5);
        c1.sub(20, 10.5);
        c1.sub(20.5, 10);

        System.out.println("\nMultiplication");
        c1.mul(10, 20);
        c1.mul(10.5, 20.5);
        c1.mul(10, 20.5);
        c1.mul(10.5, 20);

        System.out.println("\nDivision");
        c1.div(20, 10);
        c1.div(20.5, 10.5);
        c1.div(20, 10.5);
        c1.div(20.5, 10);

	}

}
