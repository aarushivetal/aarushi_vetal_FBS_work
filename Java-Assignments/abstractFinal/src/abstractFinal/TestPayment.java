package abstractFinal;

abstract class Payment {

    int paymentId;
    double amount;
    String payerName;
    String status;

    Payment(int paymentId, double amount, String payerName) {
        this.paymentId = paymentId;
        this.amount = amount;
        this.payerName = payerName;
        this.status = "PENDING";
    }

    void printSummary() {
        System.out.println("\nPayment ID : " + paymentId);
        System.out.println("Payer Name : " + payerName);
        System.out.println("Amount : " + amount);
        System.out.println("Status : " + status);
    }

    final void process() {

        if (validate()) {
            deductAmount();
            sendNotification();
            status = "SUCCESS";
        } else {
            status = "FAILED";
            System.out.println("Payment Validation Failed");
        }
    }

    abstract boolean validate();

    abstract void deductAmount();

    abstract void sendNotification();
}

class CardPayment extends Payment {

    String cardNumber;
    String cvv;

    CardPayment(int paymentId, double amount, String payerName,
                String cardNumber, String cvv) {

        super(paymentId, amount, payerName);
        this.cardNumber = cardNumber;
        this.cvv = cvv;
    }

    boolean validate() {

        return cardNumber.length() == 16 &&
               cvv.length() == 3 &&
               amount > 0;
    }

    void deductAmount() {
        System.out.println("Amount deducted using Card");
    }

    void sendNotification() {
        System.out.println("Card Payment Notification Sent");
    }
}

class UPIPayment extends Payment {

    String upiId;

    UPIPayment(int paymentId, double amount,
               String payerName, String upiId) {

        super(paymentId, amount, payerName);
        this.upiId = upiId;
    }

    boolean validate() {

        return upiId.contains("@") &&
               amount >= 1 &&
               amount <= 100000;
    }

    void deductAmount() {
        System.out.println("Amount deducted using UPI");
    }

    void sendNotification() {
        System.out.println("UPI Payment Notification Sent");
    }
}


class TestPayment {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		 Payment p1 = new CardPayment(
	                101, 5000,
	                "Aarushi",
	                "1234567890123456",
	                "123");

	        Payment p2 = new UPIPayment(
	                102, 2500,
	                "Neha",
	                "neha@okhdfc");

	        Payment p3 = new CardPayment(
	                103, 1000,
	                "Priya",
	                "12345",
	                "12");

	        p1.process();
	        p1.printSummary();

	        p2.process();
	        p2.printSummary();

	        p3.process();
	        p3.printSummary();

	}

}
