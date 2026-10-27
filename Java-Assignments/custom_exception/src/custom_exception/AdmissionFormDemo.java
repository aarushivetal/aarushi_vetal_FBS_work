package custom_exception;

class EmptyNameException extends Exception {
    public EmptyNameException(String message) {
        super(message);
    }
}

class UnderageException extends Exception {
    public UnderageException(String message) {
        super(message);
    }
}

class InvalidPercentageException extends Exception {
    public InvalidPercentageException(String message) {
        super(message);
    }
}

class NotFitForAdmissionException extends Exception {
    public NotFitForAdmissionException(String message) {
        super(message);
    }
}

class FeesNotPaidException extends Exception {
    public FeesNotPaidException(String message) {
        super(message);
    }
}

class InsufficientFeesException extends Exception {
    public InsufficientFeesException(String message) {
        super(message);
    }
}

class AdmissionForm {
    String studentName;
    int age;
    double percentage;
    double courseFees;
    double feesPaid;

    public AdmissionForm(String studentName, int age,
                        double percentage, double courseFees,
                        double feesPaid) {
        this.studentName = studentName;
        this.age = age;
        this.percentage = percentage;
        this.courseFees = courseFees;
        this.feesPaid = feesPaid;
    }

    public void validateForm()
            throws EmptyNameException, UnderageException,
                   InvalidPercentageException,
                   NotFitForAdmissionException,
                   FeesNotPaidException,
                   InsufficientFeesException {

        if (studentName == null || studentName.trim().isEmpty()) {
            throw new EmptyNameException("Student name cannot be empty.");
        }

        if (age < 17) {
            throw new UnderageException(
                "Student must be at least 17 years old.");
        }

        if (percentage < 0 || percentage > 100) {
            throw new InvalidPercentageException(
                "Percentage must be between 0 and 100.");
        }

        if (percentage < 35) {
            throw new NotFitForAdmissionException(
                "Student is not eligible for admission.");
        }

        if (feesPaid <= 0) {
            throw new FeesNotPaidException(
                "No course fees have been paid.");
        }

        if (feesPaid < courseFees * 0.30) {
            throw new InsufficientFeesException(
                "At least 30% of course fees must be paid.");
        }
    }
}

public class AdmissionFormDemo {

	public static void main(String[] args) {
		AdmissionForm form = new AdmissionForm(
	            "Aarushi", 20, 85, 50000, 20000
	        );

	        try {
	            form.validateForm();
	            System.out.println("Admission Successful!");
	        }
	        catch (EmptyNameException e) {
	            System.out.println("Error: " + e.getMessage());
	        }
	        catch (UnderageException e) {
	            System.out.println("Error: " + e.getMessage());
	        }
	        catch (InvalidPercentageException e) {
	            System.out.println("Error: " + e.getMessage());
	        }
	        catch (NotFitForAdmissionException e) {
	            System.out.println("Error: " + e.getMessage());
	        }
	        catch (FeesNotPaidException e) {
	            System.out.println("Error: " + e.getMessage());
	        }
	        catch (InsufficientFeesException e) {
	            System.out.println("Error: " + e.getMessage());
	        }
	    }

	}


