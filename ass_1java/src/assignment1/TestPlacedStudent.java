package assignment1;

import java.util.Scanner;

class PlacedStudent
{
	 	int frn;
	    String studentName;
	    double distanceCovered;
	    String companyName;
	    String designation;
	    
	    PlacedStudent()
	    {
	    	System.out.println("Default Constructor called");
	    	this.frn=101;
	    	this.studentName="Aarushi";
	    	this.distanceCovered=10.5;
	    	this.companyName="TCS";
	    	this.designation="software";
	    }
	    
	    PlacedStudent(int f, String n, double d, String c, String des)
	    {
	        System.out.println("Parameterized Constructor Called");
	        this.frn = f;
	        this.studentName = n;
	        this.distanceCovered = d;
	        this.companyName = c;
	        this.designation = des;
	    }
	    
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

	    void setCompanyName(String c)
	    {
	        this.companyName = c;
	    }

	    void setDesignation(String des)
	    {
	        this.designation = des;
	    }
	    
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

	    String getCompanyName()
	    {
	        return this.companyName;
	    }

	    String getDesignation()
	    {
	        return this.designation;
	    }
	    
	    void display()
	    {
	        System.out.println("FRN :- " + this.frn);
	        System.out.println("Student Name :- " + this.studentName);
	        System.out.println("Distance Covered :- " + this.distanceCovered);
	        System.out.println("Company Name :- " + this.companyName);
	        System.out.println("Designation :- " + this.designation);
	    }
	    
	    public String toString()
	    {
	        return "PlacedStudent [frn=" + frn +
	               ", studentName=" + studentName +
	               ", distanceCovered=" + distanceCovered +
	               ", companyName=" + companyName +
	               ", designation=" + designation + "]";
	    }
}

public class TestPlacedStudent {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		
		PlacedStudent p1;
		p1=new PlacedStudent();
		
		System.out.println("\nEnter students details");
		
		System.out.print("enter frn:");
		p1.setFrn(s.nextInt());
		
		s.nextLine();
		
		System.out.print("enter student name:");
		p1.setStudentName(s.nextLine());
		
		System.out.print("enter distance covered");
		p1.setDistanceCovered(s.nextDouble());
		
		s.nextLine();
		
		System.out.print("enter designation:");
		 p1.setDesignation(s.nextLine());

	    System.out.println("\nPlaced Student Details");
	    p1.display();
	    
	    System.out.println("\nUsing Getters");
        System.out.println("FRN :- " + p1.getFrn());
        System.out.println("Student Name :- " + p1.getStudentName());
        System.out.println("Distance Covered :- " + p1.getDistanceCovered());
        System.out.println("Company Name :- " + p1.getCompanyName());
        System.out.println("Designation :- " + p1.getDesignation());
        
        System.out.println("\nHashCode :- " + p1.hashCode());
        
        System.out.println("\nToString Output");
        System.out.println(p1.toString());
        
        System.out.println("\nParameterized Constructor Object");
        
        PlacedStudent p2 = new PlacedStudent(102, "Janvi", 25.5, "Infosys", "Java Developer");

        p2.display();

        System.out.println("\nHashCode :- " + p2.hashCode());

        System.out.println(p2.toString());
	}

}
