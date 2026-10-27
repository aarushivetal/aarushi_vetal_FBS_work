package p3;

import p1.Employee;
import p2.Admin;
import p2.HR;
import p2.SalesManager;

public class Test {
	public static void main(String[] args) {

        Employee emp[] = new Employee[3];

        emp[0] = new HR(101, "Aarushi", 50000, 10000);
        emp[1] = new SalesManager(102, "Prathamesh", 60000, 8000, 100000);
        emp[2] = new Admin(103, "Rajveer", 45000, 5000);

        for (Employee e : emp) {
            System.out.println(e);
            System.out.println("Calculated Salary : " + e.calSal());
            System.out.println("--------------------------------");
        }
    }

}
