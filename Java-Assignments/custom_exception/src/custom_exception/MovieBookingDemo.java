package custom_exception;

import java.util.Scanner;

class InvalidTicketNumberException extends Exception {
    public InvalidTicketNumberException(String message) {
        super(message);
    }
}

class TicketsSoldOutException extends Exception {
    public TicketsSoldOutException(String message) {
        super(message);
    }
}

class MovieBooking {

    static final String movieName = "3 Idiots";
    static final int ticketPrice = 200;
    static int remainingTickets = 50;

    public void bookTickets(int numberOfTickets)
            throws InvalidTicketNumberException,
                   TicketsSoldOutException {

        if (numberOfTickets <= 0) {
            throw new InvalidTicketNumberException(
                "Ticket number must be greater than zero."
            );
        }

        if (remainingTickets == 0 ||
                numberOfTickets > remainingTickets) {
            throw new TicketsSoldOutException(
                "Tickets are sold out or insufficient tickets available."
            );
        }

        remainingTickets -= numberOfTickets;

        int totalAmount = numberOfTickets * ticketPrice;

        System.out.println("\nBooking Successful for \"" 
                + movieName + "\"!");
        System.out.println("Tickets booked: " + numberOfTickets);
        System.out.println("Total amount: ₹" + totalAmount);
    }
}

public class MovieBookingDemo {

	public static void main(String[] args) {
		 Scanner sc = new Scanner(System.in);
	        MovieBooking booking = new MovieBooking();

	        while (MovieBooking.remainingTickets > 0) {

	            System.out.println("\nMovie: 3 Idiots");
	            System.out.println("Ticket price: ₹"
	                    + MovieBooking.ticketPrice);
	            System.out.println("Remaining tickets: "
	                    + MovieBooking.remainingTickets);

	            System.out.print("Enter number of tickets to book: ");

	            try {
	                int numberOfTickets = sc.nextInt();

	                booking.bookTickets(numberOfTickets);
	            }
	            catch (InvalidTicketNumberException e) {
	                System.out.println("Error: " + e.getMessage());
	            }
	            catch (TicketsSoldOutException e) {
	                System.out.println("Sorry! " + e.getMessage());
	            }
	            catch (java.util.InputMismatchException e) {
	                System.out.println("Error: Please enter a valid integer.");
	                sc.next();
	            }
	        }

	        System.out.println("\nSorry! Tickets are sold out.");
	        sc.close();
	    
	}

}
