package assignment1;

import java.util.Scanner;

class SalesManager
{
	int id;
	String name;
	double salary;
	double incentive;
	double target;
	
	SalesManager()
	{
		System.out.println("Default Constructor called");
		this.id = 101;
		this.name = "Aarushi";
		this.salary = 30000;
		this.incentive = 5000;
		this.target = 100000;
	}

	SalesManager(int i, String n, double s, double in, double t)
	{
		System.out.println("Parameterized Constructor Called");
		this.id = i;
		this.name = n;
		this.salary = s;
		this.incentive = in;
		this.target = t;
	}
	
	void setId(int i)
	{
		this.id = i;
	}

	void setName(String n)
	{
		this.name = n;
	}

	void setSalary(double s)
	{
		this.salary = s;
	}

	void setIncentive(double in)
	{
		this.incentive = in;
	}

	void setTarget(double t)
	{
		this.target = t;
	}

	int getId()
	{
		return this.id;
	}

	String getName()
	{
		return this.name;
	}

	double getSalary()
	{
		return this.salary;
	}

	double getIncentive()
	{
		return this.incentive;
	}

	double getTarget()
	{
		return this.target;
	}
	
	void display()
	{
		System.out.println("ID :- " + this.id);
		System.out.println("Name :- " + this.name);
		System.out.println("Salary :- " + this.salary);
		System.out.println("Incentive :- " + this.incentive);
		System.out.println("Target :- " + this.target);
	}
	
	public String toString()
	{
		return "SalesManager [id=" + id +
			   ", name=" + name +
			   ", salary=" + salary +
			   ", incentive=" + incentive +
			   ", target=" + target + "]";
	}
}
class TestSalesManager {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);

		SalesManager sm1;
		sm1 = new SalesManager();

		System.out.println("\nEnter Sales Manager Details");

		System.out.print("Enter ID :- ");
		sm1.setId(s.nextInt());

		s.nextLine();

		System.out.print("Enter Name :- ");
		sm1.setName(s.nextLine());

		System.out.print("Enter Salary :- ");
		sm1.setSalary(s.nextDouble());

		System.out.print("Enter Incentive :- ");
		sm1.setIncentive(s.nextDouble());

		System.out.print("Enter Target :- ");
		sm1.setTarget(s.nextDouble());

		System.out.println("\nSales Manager Details");
		sm1.display();
		
		System.out.println("\nUsing Getters");
		System.out.println("ID :- " + sm1.getId());
		System.out.println("Name :- " + sm1.getName());
		System.out.println("Salary :- " + sm1.getSalary());
		System.out.println("Incentive :- " + sm1.getIncentive());
		System.out.println("Target :- " + sm1.getTarget());

		System.out.println("\nHashCode :- " + sm1.hashCode());

		System.out.println("\nToString Output");
		System.out.println(sm1.toString());

	}

}
