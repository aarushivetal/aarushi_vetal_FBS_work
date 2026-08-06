#include<stdio.h>

struct Admin
{
	int ID;
	char Name[20];
	double Salary;
	double Allowance; 
};

void storeAdmin(struct Admin ad[],int n);
void display(struct Admin ad[],int n);

int main()
{
	struct Admin ad[3];

   storeAdmin(ad,3);

    display(ad,3);
    
    return 0;
}

void storeAdmin(struct Admin ad[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
	printf("Enter ID, Name, Salary and Allowance: ");
    scanf("%d %s %lf %lf",&ad[i].ID,ad[i].Name,&ad[i].Salary,&ad[i].Allowance);
	}
}

void display(struct Admin ad[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
	printf("\nID:%d",ad[i].ID);
	printf("\nName:%s",ad[i].Name);
	printf("\nSalary:%lf",ad[i].Salary);
	printf("\nAllowance:%lf",ad[i].Allowance);
	}
}