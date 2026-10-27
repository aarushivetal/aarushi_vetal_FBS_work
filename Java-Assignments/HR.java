class HR
{
	int id;
	String name;
	double salary;
	double commission;
}

class TestHR
{
	public static void main(String[] args)
	{
		System.out.println("HR Information");

		HR h1;
		h1 = new HR();

		h1.id = 101;
		h1.name = "Aarushi";
		h1.salary = 50000;
		h1.commission = 10000;

		System.out.println("ID is: " + h1.id);
		System.out.println("Name is: " + h1.name);
		System.out.println("Salary is: " + h1.salary);
		System.out.println("Commission is: " + h1.commission);
	}
}