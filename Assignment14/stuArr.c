#include<stdio.h>

struct Student
{
	int rollNo;
	char name[50];
	float marks;
};

void storeStudent(struct Student s[],int n);
void display(struct Student s[],int n);

int main()
{
	struct Student s[3];
	
	storeStudent(s,3);

	display(s,3);

	return 0;
}

void storeStudent(struct Student s[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
	printf("enter rollNo,name and marks:");
	scanf("%d %s %f",&s[i].rollNo,s[i].name,&s[i].marks);
	}
}

void display(struct Student s[],int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
    	printf("\nStudent %d", i+1);
        printf("\nRoll No = %d", s[i].rollNo);
        printf("\nName = %s", s[i].name);
        printf("\nMarks = %d\n", s[i].marks);
	}
     
    
}

