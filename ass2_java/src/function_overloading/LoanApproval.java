package function_overloading;

class Student
{
    int rollNo;
    String name;
    double percentage;

    Student(int r, String n, double p)
    {
        rollNo = r;
        name = n;
        percentage = p;
    }
}

class Employee
{
    int id;
    String name;
    double annualSalary;

    Employee(int i, String n, double s)
    {
        id = i;
        name = n;
        annualSalary = s;
    }
}

class Bank
{
    void approveLoan(Student s)
    {
        System.out.println("Student Details");
        System.out.println("Roll No : " + s.rollNo);
        System.out.println("Name : " + s.name);
        System.out.println("Percentage : " + s.percentage);

        if(s.percentage > 80)
            System.out.println("Loan Approved : Rs. 200000");
        else if(s.percentage >= 60)
            System.out.println("Loan Approved : Rs. 100000");
        else if(s.percentage >= 40)
            System.out.println("Loan Approved : Rs. 50000");
        else
            System.out.println("No Loan Approved");
    }
    
    void approveLoan(Employee e)
    {
        System.out.println("Employee Details");
        System.out.println("ID : " + e.id);
        System.out.println("Name : " + e.name);
        System.out.println("Annual Salary : " + e.annualSalary + " LPA");

        if(e.annualSalary > 12)
            System.out.println("Loan Approved : Rs. 700000");
        else if(e.annualSalary >= 10)
            System.out.println("Loan Approved : Rs. 600000");
        else if(e.annualSalary >= 6)
            System.out.println("Loan Approved : Rs. 500000");
        else if(e.annualSalary >= 4)
            System.out.println("Loan Approved : Rs. 400000");
        else
            System.out.println("No Loan Approved");
    }
}

public class LoanApproval {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Student s1 = new Student(101, "Aarushi", 85);
        Employee e1 = new Employee(201, "Rahul", 11);

        Bank b1 = new Bank();

        b1.approveLoan(s1);
        System.out.println();

        b1.approveLoan(e1);

	}

}
