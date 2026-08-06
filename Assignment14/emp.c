struct Employee
{
	int id;
	char name[20];
	double salary;
};

struct Employee storeEmployee();
void display(struct Employee emp);


void main()
{
	struct Employee e1,e2,e3;
	
	e1=storeEmployee();
	e2=storeEmployee();
	e3=storeEmployee();
	
	display(e1);
	display(e2);
	display(e3);
}

struct Employee storeEmployee()
{
	struct Employee emp;

    printf("Enter ID, Name and Salary: ");
    scanf("%d %s %lf", &emp.id, emp.name, &emp.salary);

    return emp;
}

void display(struct Employee emp)
{
    printf("\nID = %d", emp.id);
    printf("\nName = %s", emp.name);
    printf("\nSalary = %.2lf\n", emp.salary);
}




