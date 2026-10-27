class SalesManager
{
	int id;
	String name;
	double salary;
	double incentive;
	int target;
}

class TestSalesManager
{
	public static void main(String[] args)
	{
		System.out.println("Sales Manager Information");

		SalesManager s1;
		s1 = new SalesManager();

		s1.id = 101;
		s1.name = "Aarushi";
		s1.salary = 50000;
		s1.incentive = 10000;
		s1.target = 50;

		System.out.println("ID is: " + s1.id);
		System.out.println("Name is: " + s1.name);
		System.out.println("Salary is: " + s1.salary);
		System.out.println("Incentive is: " + s1.incentive);
		System.out.println("Target is: " + s1.target);
	}
}