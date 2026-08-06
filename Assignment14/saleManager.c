#include<stdio.h>

struct SalesManager
{
	int ID;
	char Name[20];
	double Salary;
	double incentive;
	double target;
};

struct SalesManager storeSalesManager();
void display(struct SalesManager sale);

int main()
{
	struct SalesManager s1,s2,s3;
	
	s1=storeSalesManager();
	s2=storeSalesManager();
	s3=storeSalesManager();
	
	display(s1);
	display(s2);
	display(s3);
	
	return 0;
}

struct SalesManager storeSalesManager()
{
	struct SalesManager sale;
	
	printf("enter ID, Name, Salary and incentive , target:");
	scanf("%d %s %lf %lf %lf",&sale.ID,sale.Name,&sale.Salary,&sale.incentive,&sale.target);
	
	return sale;
}

void display(struct SalesManager sale)
{
	printf("\nID:%d",sale.ID);
	printf("\nName:%s",sale.Name);
	printf("\nSalary:%lf",sale.Salary);
	printf("\nincentive:%lf",sale.incentive);
	printf("\nTarget:%lf",sale.target);
}