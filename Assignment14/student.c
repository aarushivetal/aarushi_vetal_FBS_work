#include<stdio.h>

struct Student
{
	int rollNo;
	char name[50];
	float marks;
};

struct Student storeStudent();
void display(struct Student stu);

int main()
{
	struct Student s1,s2,s3;
	
	s1=storeStudent();
	s2=storeStudent();
	s3=storeStudent();
	
	display(s1);
	display(s2);
	display(s3);
	
	return 0;
}

struct Student storeStudent()
{
	struct Student stu;
	
	printf("enter rollNo,name and marks:");
	scanf("%d %s %f",&stu.rollNo,stu.name,&stu.marks);
	
	return stu;
}

void display(struct Student stu)
{
    printf("\nRollNo = %d", stu.rollNo);
    printf("\nName = %s", stu.name);
    printf("\nMarks = %.2f\n", stu.marks);
    
}

