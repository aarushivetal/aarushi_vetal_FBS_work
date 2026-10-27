package custom_exception;

import java.util.Scanner;

class InvalidUsernameException extends Exception {
    public InvalidUsernameException(String message) {
        super(message);
    }
}

class InvalidPasswordException extends Exception {
    public InvalidPasswordException(String message) {
        super(message);
    }
}

class Login {

    String username = "admin";
    String password = "12345";

    public void validateUsername(String enteredUsername)
            throws InvalidUsernameException {

        if (!username.equals(enteredUsername)) {
            throw new InvalidUsernameException(
                "Invalid username!"
            );
        }
    }

    public void validatePassword(String enteredPassword)
            throws InvalidPasswordException {

        if (!password.equals(enteredPassword)) {
            throw new InvalidPasswordException(
                "Invalid password!"
            );
        }
    }
}

public class loginDemo {

	public static void main(String[] args) {
		 Scanner sc = new Scanner(System.in);
	        Login login = new Login();

	        System.out.print("Enter username: ");
	        String enteredUsername = sc.nextLine();

	        try {
	            login.validateUsername(enteredUsername);
	        }
	        catch (InvalidUsernameException e) {
	            System.out.println("Error: " + e.getMessage());
	            sc.close();
	            return;
	        }

	        int attempts = 3;
	        boolean success = false;

	        while (attempts > 0) {

	            System.out.print("Enter password: ");
	            String enteredPassword = sc.nextLine();

	            try {
	                login.validatePassword(enteredPassword);

	                System.out.println("Login Successful!");
	                success = true;
	                break;
	            }
	            catch (InvalidPasswordException e) {
	                attempts--;

	                System.out.println("Error: " + e.getMessage());

	                if (attempts > 0) {
	                    System.out.println(
	                        "Remaining attempts: " + attempts
	                    );
	                }
  }
	        }
	        
	}
	
}


