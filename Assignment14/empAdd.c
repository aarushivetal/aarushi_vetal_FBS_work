#include<stdio.h>

struct Employee
{
	int id;
	char name[20];
	double salary;
};

void storeEmployee(struct Employee *e);
void display(struct Employee *e);

int main()
{
	struct Employee e1;
	
	storeEmployee(&e1);
	
	display(&e1);
	
	return 0;
}

void storeEmployee(struct Employee *e)
{
	printf("Enter id, name and salary: ");
    scanf("%d %s %f",&e->id,e->name,&e->salary);
}

void display(struct Employee *e)
{
	printf("\nID = %d", e->id);
	printf("\nName = %s", e->name);
    printf("\nSalary = %.2f", e->salary);
}
