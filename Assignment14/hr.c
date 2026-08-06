#include<stdio.h>

struct Hr
{
	int ID;
	char Name[20];
	double Salary;
	double Commision; 
};

struct Hr storeHr();
void display(struct Hr h);

int main()
{
	struct Hr h1,h2,h3;

    h1 = storeHr();
    h2 = storeHr();
    h3 = storeHr();

    display(h1);
    display(h2);
    display(h3);

    return 0;
}

struct Hr storeHr()
{
	struct Hr h;
	
	printf("Enter ID, Name, Salary and Commision: ");
    scanf("%d %s %lf %lf",&h.ID,h.Name,&h.Salary,&h.Commision);

    return h;
}

void display(struct Hr h)
{
	printf("\nID:%d",h.ID);
	printf("\nName:%s",h.Name);
	printf("\nSalary:%lf",h.Salary);
	printf("\nCommision:%lf",h.Commision);
}