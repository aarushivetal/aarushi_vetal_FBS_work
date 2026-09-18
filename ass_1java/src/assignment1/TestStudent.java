package assignment1;

import java.util.Scanner;

class Student
{
    int frn;
    String studentName;
    double distanceCovered;

    // Default Constructor
    Student()
    {
        System.out.println("Default Constructor Called");
        this.frn = 101;
        this.studentName = "Aarushi";
        this.distanceCovered = 10.5;
    }

    // Parameterized Constructor
    Student(int f, String n, double d)
    {
        System.out.println("Parameterized Constructor Called");
        this.frn = f;
        this.studentName = n;
        this.distanceCovered = d;
    }

    // Setters
    void setFrn(int f)
    {
        this.frn = f;
    }

    void setStudentName(String n)
    {
        this.studentName = n;
    }

    void setDistanceCovered(double d)
    {
        this.distanceCovered = d;
    }

    // Getters
    int getFrn()
    {
        return this.frn;
    }

    String getStudentName()
    {
        return this.studentName;
    }

    double getDistanceCovered()
    {
        return this.distanceCovered;
    }

    // Display Method
    void display()
    {
        System.out.println("FRN :- " + this.frn);
        System.out.println("Student Name :- " + this.studentName);
        System.out.println("Distance Covered :- " + this.distanceCovered);
    }

    // toString Method
    public String toString()
    {
        return "Student [frn=" + frn +
               ", studentName=" + studentName +
               ", distanceCovered=" + distanceCovered + "]";
    }
}


class TestStudent {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		 Scanner s = new Scanner(System.in);

	        Student s1;
	        s1 = new Student();

	        System.out.println("\nEnter Student Details");

	        System.out.print("Enter FRN :- ");
	        s1.setFrn(s.nextInt());

	        s.nextLine();

	        System.out.print("Enter Student Name :- ");
	        s1.setStudentName(s.nextLine());

	        System.out.print("Enter Distance Covered :- ");
	        s1.setDistanceCovered(s.nextDouble());

	        System.out.println("\nStudent Details");
	        s1.display();

	        System.out.println("\nUsing Getters");
	        System.out.println("FRN :- " + s1.getFrn());
	        System.out.println("Student Name :- " + s1.getStudentName());
	        System.out.println("Distance Covered :- " + s1.getDistanceCovered());

	        System.out.println("\nHashCode :- " + s1.hashCode());

	        System.out.println("\nToString Output");
	        System.out.println(s1.toString());

	        System.out.println("\nParameterized Constructor Object");

	        Student s2 = new Student(102, "Janvi", 25.5);

	        s2.display();

	        System.out.println("\nHashCode :- " + s2.hashCode());

	        System.out.println(s2.toString());
	    }
	}

