#include<stdio.h>

struct SalesManager
{
	int ID;
	char Name[20];
	double Salary;
	double incentive;
	double target;
};

void storeSalesManager(struct SalesManager sake[],int n);
void display(struct SalesManager sale[],int n);

int main()
{
	struct SalesManager sale[3];
	
	storeSalesManager(sale,3);
	
	display(sale,3);
	
	return 0;
}

void storeSalesManager(struct SalesManager sale[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("enter ID, Name, Salary and incentive , target:");
		scanf("%d %s %lf %lf %lf",&sale[i].ID,sale[i].Name,&sale[i].Salary,&sale[i].incentive,&sale[i].target);
	}
}

void display(struct SalesManager sale[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
	printf("\nID:%d",sale[i].ID);
	printf("\nName:%s",sale[i].Name);
	printf("\nSalary:%lf",sale[i].Salary);
	printf("\nincentive:%lf",sale[i].incentive);
	printf("\nTarget:%lf",sale[i].target);
	}
}