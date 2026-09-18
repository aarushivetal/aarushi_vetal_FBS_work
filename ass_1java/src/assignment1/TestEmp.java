package assignment1;

import java.util.Scanner;

class Employee
{
	int Id;
	String Name;
	double Salary;
	
	Employee()
	{
		System.out.println("Default Constructor called");
		this.Id=101;
		this.Name="Sam";
		this.Salary=1999;
	}
	
	Employee(int I, String N ,double S)
	{
		System.out.println("Parameterized Constructor Called");
		this.Id=I;
		this.Name=N;
		this.Salary=S;
	}
	
	void setId(int I)
	{
		this.Id = I;
	}

	void setName(String N)
	{
		this.Name = N;
	}

	void setSalary(double S)
	{
		this.Salary = S;
	}
	
	int getId()
	{
		return this.Id;
	}

	String getName()
	{
		return this.Name;
	}

	double getSalary()
	{
		return this.Salary;
	}
	
	void display()
	{
		System.out.println("ID :- " + this.Id);
		System.out.println("Name :- " + this.Name);
		System.out.println("Salary :- " + this.Salary);
	}

	public String toString()
	{
		return "Employee [Id=" + Id + ", Name=" + Name + ", Salary=" + Salary + "]";
	}

}

class TestEmp {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner s = new Scanner(System.in);

		Employee e1;
		e1 = new Employee();

		System.out.println("\nEnter Employee Details");

		System.out.print("Enter ID :- ");
		e1.setId(s.nextInt());

		s.nextLine();

		System.out.print("Enter Name :- ");
		e1.setName(s.nextLine());

		System.out.print("Enter Salary :- ");
		e1.setSalary(s.nextDouble());

		System.out.println("\nEmployee Details");
		e1.display();
		
		System.out.println("\nUsing Getters");
		System.out.println("ID :- " + e1.getId());
		System.out.println("Name :- " + e1.getName());
		System.out.println("Salary :- " + e1.getSalary());

		System.out.println("\nHashCode :- " + e1.hashCode());

		System.out.println("\nToString Output");
		System.out.println(e1.toString());

	}

}
