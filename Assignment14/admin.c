#include<stdio.h>

struct Admin
{
	int ID;
	char Name[20];
	double Salary;
	double Allowance; 
};

struct Admin storeAdmin();
void display(struct Admin ad);

int main()
{
	struct Admin a1,a2,a3;

    a1 = storeAdmin();
    a2 = storeAdmin();
    a3 = storeAdmin();

    display(a1);
    display(a2);
    display(a3);

    return 0;
}

struct Admin storeAdmin()
{
	struct Admin ad;
	
	printf("Enter ID, Name, Salary and Allowance: ");
    scanf("%d %s %lf %lf",&ad.ID,ad.Name,&ad.Salary,&ad.Allowance);

    return ad;
}

void display(struct Admin ad)
{
	printf("\nID:%d",ad.ID);
	printf("\nName:%s",ad.Name);
	printf("\nSalary:%lf",ad.Salary);
	printf("\nAllowance:%lf",ad.Allowance);
}