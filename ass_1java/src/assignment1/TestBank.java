package assignment1;

import java.util.Scanner;

class Bank
{
    long accountNumber;
    String holderName;
    double currentBalance;
    double interestRate;

    Bank()
    {
        System.out.println("Default Constructor called");

        this.accountNumber=1234567890L;
        this.holderName="Janvi";
        this.currentBalance=50000;
        this.interestRate=7.5;
    }

    Bank(long a,String h,double b,double i)
    {
        System.out.println("Parameterized Constructor called");

        this.accountNumber=a;
        this.holderName=h;
        this.currentBalance=b;
        this.interestRate=i;
    }

    void setAccountNumber(long a)
    {
        this.accountNumber=a;
    }

    void setHolderName(String h)
    {
        this.holderName=h;
    }

    void setCurrentBalance(double b)
    {
        this.currentBalance=b;
    }

    void setInterestRate(double i)
    {
        this.interestRate=i;
    }

    void Display()
    {
        System.out.println("Account Number:- "+this.accountNumber);
        System.out.println("Holder Name:- "+this.holderName);
        System.out.println("Current Balance:- "+this.currentBalance);
        System.out.println("Interest Rate:- "+this.interestRate);
    }

    long getAccountNumber()
    {
        return this.accountNumber;
    }

    String getHolderName()
    {
        return this.holderName;
    }

    double getCurrentBalance()
    {
        return this.currentBalance;
    }

    double getInterestRate()
    {
        return this.interestRate;
    }

    public String toString()
    {
        return "Bank [accountNumber=" + accountNumber +
               ", holderName=" + holderName +
               ", currentBalance=" + currentBalance +
               ", interestRate=" + interestRate + "]";
    }
}

public class TestBank
{
    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);

        Bank ba1;
        ba1=new Bank();

        System.out.println("Enter Details of Bank Account BA1");

        System.out.println("Enter Account Number:- ");
        long accountNumber1=s.nextLong();
        ba1.setAccountNumber(accountNumber1);

        s.nextLine();

        System.out.println("Enter Holder Name:- ");
        String holderName1=s.nextLine();
        ba1.setHolderName(holderName1);

        System.out.println("Enter Current Balance:- ");
        double currentBalance1=s.nextDouble();
        ba1.setCurrentBalance(currentBalance1);

        System.out.println("Enter Interest Rate:- ");
        double interestRate1=s.nextDouble();
        ba1.setInterestRate(interestRate1);

        System.out.println("Details of Bank Account BA1");
        ba1.Display();

        System.out.println("\nUsing Getters");

        System.out.println("Account Number:- "+ba1.getAccountNumber());
        System.out.println("Holder Name:- "+ba1.getHolderName());
        System.out.println("Current Balance:- "+ba1.getCurrentBalance());
        System.out.println("Interest Rate:- "+ba1.getInterestRate());

        System.out.println("\nHashCode :- "+ba1.hashCode());

        System.out.println("\nToString Output");
        System.out.println(ba1.toString());
    }
}

class BankAccountConstructor
{
    public static void main(String[] args)
    {
        System.out.println("Default Constructor called");

        Bank ba1;
        ba1=new Bank();
        ba1.Display();

        System.out.println("\nParameterized Constructor called");

        Bank ba2;
        ba2=new Bank(9876543210L,"Rahul",75000,8.5);
        ba2.Display();
    }
}