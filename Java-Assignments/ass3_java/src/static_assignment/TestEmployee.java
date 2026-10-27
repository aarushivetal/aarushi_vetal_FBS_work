package static_assignment;

class Employee
{
	String employeeName;
	double basicSalary;
	static double bonusRate=10.0;
	
	Employee()
	{
		this.employeeName="NA";
		this.basicSalary=0;
	}
	
	Employee(String employeeName,double basicSalary)
	{
		this.employeeName=employeeName;
		this.basicSalary = basicSalary;
	}
	
	void setEmployeeName(String employeeName)
    {
        this.employeeName = employeeName;
    }

    void setBasicSalary(double basicSalary)
    {
        this.basicSalary = basicSalary;
    }

    static void setBonusRate(double bonusRate)
    {
        Employee.bonusRate = bonusRate;
    }

    double calculateSalary()
    {
        return this.basicSalary +
               (this.basicSalary * Employee.bonusRate / 100);
    }

    void display()
    {
        System.out.println("Employee Name :- " + this.employeeName);
        System.out.println("Basic Salary :- " + this.basicSalary);
        System.out.println("Bonus Rate :- " + Employee.bonusRate);
        System.out.println("Total Salary :- " + calculateSalary());
        System.out.println();
    }
}

class TestEmployee {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 Employee e1 = new Employee("Aarushi", 30000);
	        Employee e2 = new Employee("Janvi", 40000);
	        Employee e3 = new Employee("Prathamesh", 50000);

	        e1.display();
	        e2.display();
	        e3.display();

	        System.out.println("Updating Bonus Rate...\n");

	        Employee.setBonusRate(15.0);

	        e1.display();
	        e2.display();
	        e3.display();

	}

}
