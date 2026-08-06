#include<stdio.h>

struct Hr
{
	int ID;
	char Name[20];
	double Salary;
	double Commision; 
};

void storeHr(struct Hr h[],int n);
void display(struct Hr h[],int n);

void main()
{
	struct Hr h[3];

    storeHr(h,3);

    display(h,3);
}

void storeHr(struct Hr h[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
	printf("Enter ID, Name, Salary and Commision: ");
    scanf("%d %s %lf %lf",&h[i].ID,h[i].Name,&h[i].Salary,&h[i].Commision);
	}
}

void display(struct Hr h[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
	printf("\nID:%d",h[i].ID);
	printf("\nName:%s",h[i].Name);
	printf("\nSalary:%lf",h[i].Salary);
	printf("\nCommision:%lf",h[i].Commision);
	}
}