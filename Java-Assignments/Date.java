class Date
{
    int day;
    int month;
    int year;
    String dow;
}

class TestDate
{
    public static void main(String[] args)
    {
        System.out.println("Date Information");

        Date d1;                  
	d1 = new Date();   
        d1.day = 24;
        d1.month = 4;
        d1.year = 2004;
        d1.dow = "Saturday";

        System.out.println("Day is: " + d1.day);
        System.out.println("Month is: " + d1.month);
        System.out.println("Year is: " + d1.year);
        System.out.println("Day of Week is: " + d1.dow);
    }
}