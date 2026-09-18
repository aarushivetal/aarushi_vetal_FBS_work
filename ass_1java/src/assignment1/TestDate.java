package assignment1;

import java.util.Scanner;

class Date
{
    int day;
    int month;
    int year;
    String dow;

    Date()
    {
        day = 1;
        month = 1;
        year = 2000;
        dow = "Monday";
    }

    Date(int day, int month, int year, String dow)
    {
        this.day = day;
        this.month = month;
        this.year = year;
        this.dow = dow;
    }

    void setDay(int day)
    {
        this.day = day;
    }

    void setMonth(int month)
    {
        this.month = month;
    }

    void setYear(int year)
    {
        this.year = year;
    }

    void setDow(String dow)
    {
        this.dow = dow;
    }

    int getDay()
    {
        return day;
    }

    int getMonth()
    {
        return month;
    }

    int getYear()
    {
        return year;
    }

    String getDow()
    {
        return dow;
    }

    void display()
    {
        System.out.println("Day = " + day);
        System.out.println("Month = " + month);
        System.out.println("Year = " + year);
        System.out.println("Day Of Week = " + dow);
    }
}

public class TestDate {
    public static void main(String[] args) {
    	
    	 Scanner sc = new Scanner(System.in);

         Date d1 = new Date();

         System.out.print("Enter Day: ");
         d1.setDay(sc.nextInt());

         System.out.print("Enter Month: ");
         d1.setMonth(sc.nextInt());

         System.out.print("Enter Year: ");
         d1.setYear(sc.nextInt());

         sc.nextLine();

         System.out.print("Enter Day Of Week: ");
         d1.setDow(sc.nextLine());

         d1.display();

    }
}