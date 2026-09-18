package static_assignment;

class ElectricityBill
{
    int customerId;
    String customerName;
    int unitsConsumed;

    static double ratePerUnit = 8.0;

    ElectricityBill()
    {
        this.customerId = 0;
        this.customerName = "NA";
        this.unitsConsumed = 0;
    }

    ElectricityBill(int customerId, String customerName, int unitsConsumed)
    {
        this.customerId = customerId;
        this.customerName = customerName;
        this.unitsConsumed = unitsConsumed;
    }

    void setCustomerId(int customerId)
    {
        this.customerId = customerId;
    }

    void setCustomerName(String customerName)
    {
        this.customerName = customerName;
    }

    void setUnitsConsumed(int unitsConsumed)
    {
        this.unitsConsumed = unitsConsumed;
    }

    static void setRatePerUnit(double ratePerUnit)
    {
        ElectricityBill.ratePerUnit = ratePerUnit;
    }

    double calculateBill()
    {
        return this.unitsConsumed * ElectricityBill.ratePerUnit;
    }

    void display()
    {
        System.out.println("Customer ID :- " + this.customerId);
        System.out.println("Customer Name :- " + this.customerName);
        System.out.println("Units Consumed :- " + this.unitsConsumed);
        System.out.println("Rate Per Unit :- " + ElectricityBill.ratePerUnit);
        System.out.println("Bill Amount :- " + calculateBill());
        System.out.println();
    }
}

public class TestElectricityBill
{
    public static void main(String[] args)
    {
        ElectricityBill e1 = new ElectricityBill(101, "Aarushi", 100);
        ElectricityBill e2 = new ElectricityBill(102, "Janvi", 150);
        ElectricityBill e3 = new ElectricityBill(103, "Prathamesh", 200);

        e1.display();
        e2.display();
        e3.display();

        System.out.println("Updating Rate Per Unit...\n");

        ElectricityBill.setRatePerUnit(10.0);

        e1.display();
        e2.display();
        e3.display();
    }
}