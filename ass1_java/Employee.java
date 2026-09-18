class Employee
{
	int id;
	String name;
	double salary;
}

class TestEmp
{
	public static void main(String[] args)
	{
		System.out.println("Employee info");
		
		Employee e1;
		e1=new Employee();

		e1.id=101;
		e1.name="Aarushi";
		e1.salary=50000;

		System.out.println("ID is: " + e1.id);
		System.out.println("Name is: " + e1.name);
		System.out.println("Salary is: " + e1.salary);
	}
}