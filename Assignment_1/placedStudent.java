class PlacedStudent
{
	int frn;
	String studentName;
	double distanceCovered;
	String companyName;
	String designation;
}

class TestStudent
{
	public static void main(String[] args)
	{
		System.out.println("Placed Student Information");

		PlacedStudent p1;
		p1 = new PlacedStudent();

		p1.frn = 101;
		p1.studentName = "Aarushi";
		p1.distanceCovered = 95.5;
		p1.companyName = "TCS";
		p1.designation = "Software Developer";

		System.out.println("FRN is: " + p1.frn);
		System.out.println("Student Name is: " + p1.studentName);
		System.out.println("Distance Covered is: " + p1.distanceCovered);
		System.out.println("Company Name is: " + p1.companyName);
		System.out.println("Designation is: " + p1.designation);
	}
}