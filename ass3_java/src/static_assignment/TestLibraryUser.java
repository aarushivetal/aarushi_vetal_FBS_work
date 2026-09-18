package static_assignment;

class LibraryUser
{
    String userName;
    int daysLate;

    static double finePerDay = 5.0;

    LibraryUser()
    {
        this.userName = "NA";
        this.daysLate = 0;
    }

    LibraryUser(String userName, int daysLate)
    {
        this.userName = userName;
        this.daysLate = daysLate;
    }

    void setUserName(String userName)
    {
        this.userName = userName;
    }

    void setDaysLate(int daysLate)
    {
        this.daysLate = daysLate;
    }

    static void setFinePerDay(double finePerDay)
    {
        LibraryUser.finePerDay = finePerDay;
    }

    double calculateFine()
    {
        return this.daysLate * LibraryUser.finePerDay;
    }
    
    void display()
    {
        System.out.println("User Name :- " + this.userName);
        System.out.println("Days Late :- " + this.daysLate);
        System.out.println("Fine Per Day :- " + LibraryUser.finePerDay);
        System.out.println("Total Fine :- " + calculateFine());
        System.out.println();
    }
    
}
class TestLibraryUser {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		 LibraryUser u1 = new LibraryUser("Aarushi", 5);
	        LibraryUser u2 = new LibraryUser("Janvi", 8);
	        LibraryUser u3 = new LibraryUser("Prathamesh", 10);

	        u1.display();
	        u2.display();
	        u3.display();

	        System.out.println("Updating Fine Per Day...\n");

	        LibraryUser.setFinePerDay(10.0);

	        u1.display();
	        u2.display();
	        u3.display();
	}
}
