class BankAccount
{
	int accountNumber;
	String holderName;
	double currentBalance;
	double interestRate;
}

class TestBankAccount
{
	public static void main(String[] args)
	{
		System.out.println("Bank Account Information");

		BankAccount b1;
		b1 = new BankAccount();

		b1.accountNumber = 12345;
		b1.holderName = "Aarushi";
		b1.currentBalance = 50000;
		b1.interestRate = 7.5;

		System.out.println("Account Number is: " + b1.accountNumber);
		System.out.println("Holder Name is: " + b1.holderName);
		System.out.println("Current Balance is: " + b1.currentBalance);
		System.out.println("Interest Rate is: " + b1.interestRate);
	}
}