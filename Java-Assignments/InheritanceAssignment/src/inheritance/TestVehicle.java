package inheritance;

class Vehicle
{
	String vehicleNumber;
    String model;
    String companyName;
    int noOfWheels;
    double price;

    Vehicle(String vehicleNumber, String model, String companyName,
            int noOfWheels, double price) {

        this.vehicleNumber = vehicleNumber;
        this.model = model;
        this.companyName = companyName;
        this.noOfWheels = noOfWheels;
        this.price = price;
    }

    void display() {
        System.out.println("Vehicle Number: " + vehicleNumber);
        System.out.println("Model: " + model);
        System.out.println("Company Name: " + companyName);
        System.out.println("No Of Wheels: " + noOfWheels);
        System.out.println("Price: " + price);
    }
}

class Bike extends Vehicle {

    int noOfStands;
    int noOfHelmets;
    String bikeCategory;

    Bike(String vehicleNumber, String model, String companyName,
         int noOfWheels, double price,
         int noOfStands, int noOfHelmets, String bikeCategory) {

        super(vehicleNumber, model, companyName, noOfWheels, price);

        this.noOfStands = noOfStands;
        this.noOfHelmets = noOfHelmets;
        this.bikeCategory = bikeCategory;
    }

    void display() {
        super.display();
        System.out.println("No Of Stands: " + noOfStands);
        System.out.println("No Of Helmets: " + noOfHelmets);
        System.out.println("Bike Category: " + bikeCategory);
    }
}

class Car extends Vehicle {

    boolean hasPowerSteering;
    String driveMode;
    int parkingAssistSensors;

    Car(String vehicleNumber, String model, String companyName,
        int noOfWheels, double price,
        boolean hasPowerSteering, String driveMode,
        int parkingAssistSensors) {

        super(vehicleNumber, model, companyName, noOfWheels, price);

        this.hasPowerSteering = hasPowerSteering;
        this.driveMode = driveMode;
        this.parkingAssistSensors = parkingAssistSensors;
    }

    void display() {
        super.display();
        System.out.println("Power Steering: " + hasPowerSteering);
        System.out.println("Drive Mode: " + driveMode);
        System.out.println("Parking Assist Sensors: " + parkingAssistSensors);
    }
}

class Bus extends Vehicle {

    int passengerCapacity;
    int standingCapacity;

    Bus(String vehicleNumber, String model, String companyName,
        int noOfWheels, double price,
        int passengerCapacity, int standingCapacity) {

        super(vehicleNumber, model, companyName, noOfWheels, price);

        this.passengerCapacity = passengerCapacity;
        this.standingCapacity = standingCapacity;
    }

    void display() {
        super.display();
        System.out.println("Passenger Capacity: " + passengerCapacity);
        System.out.println("Standing Capacity: " + standingCapacity);
    }
}

class TestVehicle {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Bike b = new Bike("MH12AB1234", "Shine", "Honda",
                2, 85000, 1, 2, "Sports");

        Car c = new Car("MH14CD5678", "Swift", "Maruti",
                4, 800000, true, "Automatic", 4);

        Bus bs = new Bus("MH15EF9876", "Volvo", "Volvo",
                6, 2500000, 50, 20);

        b.display();

        System.out.println();

        c.display();

        System.out.println();

        bs.display();
	}

}
