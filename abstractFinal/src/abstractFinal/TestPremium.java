package abstractFinal;

import java.util.Scanner;

abstract class InsurancePolicy {

    String policyHolderName;
    double basePremium;

    InsurancePolicy(String policyHolderName, double basePremium) {
        this.policyHolderName = policyHolderName;
        this.basePremium = basePremium;
    }

    abstract double calculatePremium();

    void printPolicyDetails() {
        System.out.println("\nPolicy Holder Name : " + policyHolderName);
        System.out.println("Base Premium : ₹" + basePremium);
        System.out.println("Final Premium : ₹" + calculatePremium());
    }
}

class CarInsurance extends InsurancePolicy {

    int carAgeInYears;
    boolean hadAccidentInLastYear;
    double carValue;

    CarInsurance(String policyHolderName, double basePremium,
                 int carAgeInYears,
                 boolean hadAccidentInLastYear,
                 double carValue) {

        super(policyHolderName, basePremium);

        this.carAgeInYears = carAgeInYears;
        this.hadAccidentInLastYear = hadAccidentInLastYear;
        this.carValue = carValue;
    }

    double calculatePremium() {

        double premium = basePremium;

        if (carAgeInYears <= 3)
            premium += basePremium * 0.10;
        else if (carAgeInYears <= 7)
            premium += basePremium * 0.20;
        else
            premium += basePremium * 0.30;

        if (hadAccidentInLastYear)
            premium += basePremium * 0.25;
        else
            premium -= basePremium * 0.10;

        if (carValue > 1000000)
            premium += 2000;

        return premium;
    }
}

class HealthInsurance extends InsurancePolicy {

    int age;
    boolean isSmoker;
    boolean hasPreExistingDisease;

    HealthInsurance(String policyHolderName,
                    double basePremium,
                    int age,
                    boolean isSmoker,
                    boolean hasPreExistingDisease) {

        super(policyHolderName, basePremium);

        this.age = age;
        this.isSmoker = isSmoker;
        this.hasPreExistingDisease = hasPreExistingDisease;
    }

    double calculatePremium() {

        double premium = basePremium;

        if (age < 30)
            premium += basePremium * 0.10;
        else if (age <= 45)
            premium += basePremium * 0.25;
        else
            premium += basePremium * 0.40;

        if (isSmoker)
            premium += basePremium * 0.30;
        else
            premium -= basePremium * 0.05;

        if (hasPreExistingDisease)
            premium += basePremium * 0.20;

        return premium;
    }
}


class TestPremium {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc = new Scanner(System.in);

        System.out.println("1. Car Insurance");
        System.out.println("2. Health Insurance");
        System.out.print("Enter Choice : ");
        int choice = sc.nextInt();

        sc.nextLine();

        System.out.print("Enter Policy Holder Name : ");
        String name = sc.nextLine();

        System.out.print("Enter Base Premium : ");
        double premium = sc.nextDouble();

        InsurancePolicy ip;

        if (choice == 1) {

            System.out.print("Enter Car Age (Years) : ");
            int age = sc.nextInt();

            System.out.print("Had Accident Last Year? (true/false) : ");
            boolean accident = sc.nextBoolean();

            System.out.print("Enter Car Value : ");
            double value = sc.nextDouble();

            ip = new CarInsurance(
                    name,
                    premium,
                    age,
                    accident,
                    value);
        }
        else {

            System.out.print("Enter Age : ");
            int age = sc.nextInt();

            System.out.print("Is Smoker? (true/false) : ");
            boolean smoker = sc.nextBoolean();

            System.out.print("Has Pre Existing Disease? (true/false) : ");
            boolean disease = sc.nextBoolean();

            ip = new HealthInsurance(
                    name,
                    premium,
                    age,
                    smoker,
                    disease);
        }

        ip.printPolicyDetails();

	}

}
