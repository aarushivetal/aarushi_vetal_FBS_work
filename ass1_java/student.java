class Student
{
	int frn;
	String studentName;
	double distancecovered;
}

class TestStudent
{
	public static void main(String[] args)
	{
		System.out.println("Student info");
		
		Student s1;
		s1=new Student();

		s1.frn=101;
		s1.studentName="Aarushi";
		s1.distancecovered=95.5;

		System.out.println("FRN is:" + s1.frn);
		System.out.println("Student Name is:" + s1.studentName);
		System.out.println("Distance Covered is:" + s1.distancecovered);
	}
}
