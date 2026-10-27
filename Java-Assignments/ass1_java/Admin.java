class Admin
{
	int id;
	String name;
	double salary;
	double allowance;
}

class TestAdmin
{
	public static void main(String[] args)
	{
		System.out.println("Admin Information");

		Admin a1;
		a1 = new Admin();

		a1.id = 101;
		a1.name = "Aarushi";
		a1.salary = 50000;
		a1.allowance = 5000;

		System.out.println("ID is: " + a1.id);
		System.out.println("Name is: " + a1.name);
		System.out.println("Salary is: " + a1.salary);
		System.out.println("Allowance is: " + a1.allowance);
	}
}