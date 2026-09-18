package abstractFinal;

import java.util.Scanner;

abstract class ElectricityBill {

    String customerName;
    int units;

    ElectricityBill(String customerName, int units) {
        this.customerName = customerName;
        this.units = units;
    }

    void showUsage() {
        System.out.println("Customer Name : " + customerName);
        System.out.println("Units Consumed : " + units);
    }

    abstract double calculateBill();

    final void generateBill() {

        double bill = calculateBill();

        double tax = bill * 0.05; // 5% tax

        double finalBill = bill + tax + 50;

        showUsage();
        System.out.println("Final Bill Amount : ₹" + finalBill);
    }
}

class ResidentialBill extends ElectricityBill {

    ResidentialBill(String customerName, int units) {
        super(customerName, units);
    }

    double calculateBill() {

        double bill;

        if (units <= 100) {
            bill = units * 2.5;
        }
        else if (units <= 300) {
            bill = units * 3.5;
        }
        else {
            bill = units * 5;
        }

        if (units > 500) {
            bill += 150;
        }

        return bill;
    }
}

class CommercialBill extends ElectricityBill {

    CommercialBill(String customerName, int units) {
        super(customerName, units);
    }

    double calculateBill() {

        double bill = units * 6.5;

        if (units < 200) {
            bill = 1500;
        }

        if (units > 1000) {
            bill += bill * 0.08;
        }

        return bill;
    }
}

class TestElectricityBill {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 Scanner sc = new Scanner(System.in);

	        System.out.println("1. Residential");
	        System.out.println("2. Commercial");
	        System.out.print("Enter Choice : ");
	        int choice = sc.nextInt();

	        sc.nextLine();

	        System.out.print("Enter Customer Name : ");
	        String name = sc.nextLine();

	        System.out.print("Enter Units Consumed : ");
	        int units = sc.nextInt();

	        ElectricityBill eb;

	        if (choice == 1) {
	            eb = new ResidentialBill(name, units);
	        }
	        else {
	            eb = new CommercialBill(name, units);
	        }

	        eb.generateBill();

	}

}
