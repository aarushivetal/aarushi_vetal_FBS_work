#include<stdio.h>

struct Student
{
	int rollNo;
	char name[20];
	int marks;
};

void storeStudent(struct Student *s);
void display(struct Student *s);

int main()
{
	struct Student s1;

    storeStudent(&s1);
    display(&s1);

    return 0;
}

void storeStudent(struct Student *s)
{
	printf("Enter Roll No, Name and Marks: ");
    scanf("%d %s %d",&s->rollNo,s->name,&s->marks);
}

void display(struct Student *s)
{
	printf("\nRoll No = %d", s->rollNo);
    printf("\nName = %s", s->name);
    printf("\nMarks = %d", s->marks);
}