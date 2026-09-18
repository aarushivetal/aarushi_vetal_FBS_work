package assignment1;

import java.util.Scanner;

class Admin
{
	int id;
	String name;
	double salary;
	double allowance;
	
	Admin()
	{
		System.out.println("Default Constructor called");
		this.id = 101;
		this.name = "Aarushi";
		this.salary = 30000;
		this.allowance = 5000;
	}

	Admin(int i, String n, double s, double a)
	{
		System.out.println("Parameterized Constructor Called");
		this.id = i;
		this.name = n;
		this.salary = s;
		this.allowance = a;
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

	void setAllowance(double a)
	{
		this.allowance = a;
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

	double getAllowance()
	{
		return this.allowance;
	}
	
	void display()
	{
		System.out.println("ID :- " + this.id);
		System.out.println("Name :- " + this.name);
		System.out.println("Salary :- " + this.salary);
		System.out.println("Allowance :- " + this.allowance);
	}

	public String toString()
	{
		return "Admin [id=" + id +
			   ", name=" + name +
			   ", salary=" + salary +
			   ", allowance=" + allowance + "]";
	}
}


class TestAdmin {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner s = new Scanner(System.in);

		Admin a1;
		a1 = new Admin();

		System.out.println("\nEnter Admin Details");

		System.out.print("Enter ID :- ");
		a1.setId(s.nextInt());

		s.nextLine();

		System.out.print("Enter Name :- ");
		a1.setName(s.nextLine());

		System.out.print("Enter Salary :- ");
		a1.setSalary(s.nextDouble());

		System.out.print("Enter Allowance :- ");
		a1.setAllowance(s.nextDouble());

		System.out.println("\nAdmin Details");
		a1.display();
		
		System.out.println("\nUsing Getters");
		System.out.println("ID :- " + a1.getId());
		System.out.println("Name :- " + a1.getName());
		System.out.println("Salary :- " + a1.getSalary());
		System.out.println("Allowance :- " + a1.getAllowance());

		System.out.println("\nHashCode :- " + a1.hashCode());

		System.out.println("\nToString Output");
		System.out.println(a1.toString());


	}

}
