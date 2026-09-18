package assignment1;

import java.util.Scanner;

class HR
{
	int id;
	String name;
	double salary;
	double commission;

	HR()
	{
		System.out.println("Default Constructor called");
		this.id = 101;
		this.name = "Aarushi";
		this.salary = 25000;
		this.commission = 5000;
	}
	
	HR(int i, String n, double s, double c)
	{
		System.out.println("Parameterized Constructor Called");
		this.id = i;
		this.name = n;
		this.salary = s;
		this.commission = c;
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

	void setCommission(double c)
	{
		this.commission = c;
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

	double getCommission()
	{
		return this.commission;
	}
	
	void display()
	{
		System.out.println("ID :- " + this.id);
		System.out.println("Name :- " + this.name);
		System.out.println("Salary :- " + this.salary);
		System.out.println("Commission :- " + this.commission);
	}
	
	public String toString()
	{
		return "HR [id=" + id +
			   ", name=" + name +
			   ", salary=" + salary +
			   ", commission=" + commission + "]";
	}
}

class TestHR {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner s = new Scanner(System.in);

		HR h1;
		h1 = new HR();

		System.out.println("\nEnter HR Details");

		System.out.print("Enter ID :- ");
		h1.setId(s.nextInt());

		s.nextLine();

		System.out.print("Enter Name :- ");
		h1.setName(s.nextLine());

		System.out.print("Enter Salary :- ");
		h1.setSalary(s.nextDouble());

		System.out.print("Enter Commission :- ");
		h1.setCommission(s.nextDouble());

		System.out.println("\nHR Details");
		h1.display();
		
		System.out.println("\nUsing Getters");
		System.out.println("ID :- " + h1.getId());
		System.out.println("Name :- " + h1.getName());
		System.out.println("Salary :- " + h1.getSalary());
		System.out.println("Commission :- " + h1.getCommission());

		System.out.println("\nHashCode :- " + h1.hashCode());

		System.out.println("\nToString Output");
		System.out.println(h1.toString());

	}

}
