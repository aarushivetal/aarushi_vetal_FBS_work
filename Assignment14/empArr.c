struct Employee
{
	int id;
	char name[20];
	double salary;
};

void storeEmployee(struct Employee emp[],int n);
void display(struct Employee emp[],int n);


int main()
{
	struct Employee emp[3];
	
	storeEmployee(emp,3);
	
	display(emp,3);
	
	return 0;
}

void storeEmployee(struct Employee emp[],int n)
{
	int i;

	for(i=0;i<n;i++)
	{
	printf("Enter ID, Name and Salary: ");
    scanf("%d %s %lf", &emp[i].id, emp[i].name, &emp[i].salary);
	}
}

void display(struct Employee emp[],int n)
{
  int i;
  
  for(i=0;i<n;i++)
  {
  	printf("\nID = %d", emp[i].id);
    printf("\nName = %s", emp[i].name);
    printf("\nSalary = %.2lf\n", emp[i].salary);
  }
}




