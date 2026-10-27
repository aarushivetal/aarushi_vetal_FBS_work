package inheritance;

class Student
{
	int rollNo;
	String name;
	
	 Student() {
	        rollNo = 0;
	        name = "Not Given";
	    }
	
	Student(int rollNo,String name)
	{
		this.rollNo=rollNo;
		this.name=name;
	}
	
	void setRollNo(int rollNo) {
        this.rollNo = rollNo;
    }

    void setName(String name) {
        this.name = name;
    }
	
    int getRollNo() {
        return rollNo;
    }

    String getName() {
        return name;
    }

    void display() {
        System.out.println("Roll No: " + getRollNo());
        System.out.println("Name: " + getName());
    }
	
}

class EngineeringStudent extends Student {
    String branch;
    
    EngineeringStudent() {
        super();
        branch = "Not Given";
    }
    
    EngineeringStudent(int rollNo, String name, String branch) {
        super(rollNo, name);
        this.branch = branch;
    }

    void setBranch(String branch) {
        this.branch = branch;
    }

    String getBranch() {
        return branch;
    }

    void showBranch() {
        System.out.println("Branch: " + getBranch());
    }
}

class MedicalStudent extends Student {
    String specialization;

    // Default Constructor
    MedicalStudent() {
        super();
        specialization = "Not Given";
    }

    // Parameterized Constructor
    MedicalStudent(int rollNo, String name, String specialization) {
        super(rollNo, name);
        this.specialization = specialization;
    }

    void setSpecialization(String specialization) {
        this.specialization = specialization;
    }

    String getSpecialization() {
        return specialization;
    }

    void showSpecialization() {
        System.out.println("Specialization: " + getSpecialization());
    }
}



class TestInheritance {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		 EngineeringStudent e = new EngineeringStudent(101, "Aarushi", "Computer");

	     e.display();
	     e.showBranch();

	     System.out.println();

	     MedicalStudent m = new MedicalStudent(102, "Priya", "Cardiology");

	        m.display();
	        m.showSpecialization();
	}

}
