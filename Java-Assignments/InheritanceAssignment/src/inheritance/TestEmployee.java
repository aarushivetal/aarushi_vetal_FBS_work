package inheritance;

class Employee {
    int id;
    String name;
    double salary;
    
    Employee()
    {
    	this.id = 101;
        this.name = "NA";
        this.salary = 30000;
    }

    Employee(int id, String name, double salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }

    void display() {
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Salary: " + salary);
    }
}

class Admin extends Employee {

    double allowance;

    Admin(int id, String name, double salary, double allowance) {
        super(id, name, salary);
        this.allowance = allowance;
    }

    void display() {
        super.display();
        System.out.println("Allowance: " + allowance);
    }
}

class SalesManager extends Employee {

    double incentive;
    double target;

    SalesManager(int id, String name, double salary, double incentive, double target) {
        super(id, name, salary);
        this.incentive = incentive;
        this.target = target;
    }

    void display() {
        super.display();
        System.out.println("Incentive: " + incentive);
        System.out.println("Target: " + target);
    }
}

class HR extends Employee {

    double commission;

    HR(int id, String name, double salary, double commission) {
        super(id, name, salary);
        this.commission = commission;
    }

    void display() {
        super.display();
        System.out.println("Commission: " + commission);
    }
}


class TestEmployee {

	public static void main(String[] args) {
		
		 Admin a = new Admin(101, "Aarushi", 50000, 5000);
	        SalesManager s = new SalesManager(102, "Neha", 60000, 7000, 100000);
	        HR h = new HR(103, "Priya", 45000, 3000);

	        a.display();

	        System.out.println();

	        s.display();

	        System.out.println();

	        h.display();

	}

}
